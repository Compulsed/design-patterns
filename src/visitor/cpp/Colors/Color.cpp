//
//  Color.cpp
//  Visitor
//
//  Created by Dale Salter on 11/02/2015.
//  Copyright (c) 2015 Dale Salter. All rights reserved.
//

#include "DEFINES.h"


#include "Color.h"
#include "Visitor.h"


/*
    Defines that each of these functions can accept a visitor
 */
void Red::accept(Visitor *v){
    if(INFORM) std::cout << "Accept RED" << std::endl;
    v->visit(this);
}

void Blu::accept(Visitor *v){
    if(INFORM) std::cout << "Accept BLU" << std::endl;
    v->visit(this);
}

void Green::accept(Visitor *v){
    if(INFORM) std::cout << "Accept GREEN" << std::endl;
    v->visit(this);
}

