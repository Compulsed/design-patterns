//
//  Visitor.h
//  Visitor
//
//  Created by Dale Salter on 11/02/2015.
//  Copyright (c) 2015 Dale Salter. All rights reserved.
//

#ifndef __Visitor__Visitor__
#define __Visitor__Visitor__

#include "DEFINES.h"


#include "Color.h"

/*
    Defines that the visitor has to implement functions for each possible thing it could visit
 */
class Visitor {
public:
    virtual void visit(Red*) = 0;
    virtual void visit(Blu*) = 0;
    virtual void visit(Green*) = 0;
};

/*
    Defines functions for what happens when it visits something
 
    This function counts the types of each
 */
class CountVisitor: public Visitor {
public:
    CountVisitor(){
        m_num_red = m_num_blu = 0;
    }
    
    /*virtual*/void visit(Red*){
        ++m_num_red;
    }
    
    /*virtual*/void visit(Blu*){
        ++m_num_blu;
    }
    
    /*virtual*/void visit(Green*){
        ++m_num_green;
    }
    
    void report_num(){
        std::cout << "Reds " << m_num_red << ", Blus " << m_num_blu << ", Green " << m_num_green << '\n';
    }
    
    ~CountVisitor(){ if(INFORM) std::cout << "CountVisitor Destructor" << std::endl; }
private:
    int m_num_red, m_num_blu, m_num_green;
};

/*
    This function prints a message from each of the different types of nodes
 */
class CallVisitor: public Visitor{
public:
    /*virtual*/void visit(Red *r){
        r->eye();
    }
    /*virtual*/void visit(Blu *b){
        b->sky();
    }
    
    /*virtual*/void visit(Green *g){
        g->grass();
    }
    
    ~CallVisitor(){ if(INFORM) std::cout << "CallVisitor Destructor" << std::endl; }
};

#endif /* defined(__Visitor__Visitor__) */
