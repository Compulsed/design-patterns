//
//  ObjectStructure.cpp
//  Visitor
//
//  Created by Dale Salter on 11/02/2015.
//  Copyright (c) 2015 Dale Salter. All rights reserved.
//

#include "DEFINES.h"

#include "ObjectStructure.h"


ObjectStructure::ObjectStructure(int length){
    srand(time(NULL));
    set = vector<Color*>(length);
    
    for(Color* &pretty : set){
        
        switch(rand() % 3 + 1){
            case 1:
                pretty = new Blu;
                break;
            case 2:
                pretty = new Green;
                break;
            case 3:
                pretty = new Red;
                break;
        }
        
    }
    
    CountVisitor count_operation;
    CallVisitor call_operation;
    
    for(Color *&pretty : set){
        pretty->accept(&count_operation);
        pretty->accept(&call_operation);
    }
    
    count_operation.report_num();
}

ObjectStructure::~ObjectStructure(){
    if(INFORM) std::cout << "ObjectStructure Destructor" << std::endl;

    for(Color* &pretty : set){
        delete pretty;
    }
}