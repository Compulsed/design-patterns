//
//  Color.h
//  Visitor
//
//  Created by Dale Salter on 11/02/2015.
//  Copyright (c) 2015 Dale Salter. All rights reserved.
//

#ifndef Visitor_Color_h
#define Visitor_Color_h

#include "DEFINES.h"

#include <iostream>

using namespace std;

/*
    An interface saying it MUST implement an accept operation
 */
class Color{
public:
    virtual void accept(class Visitor*) = 0;
    virtual ~Color(){};
    virtual string toString() = 0;
};




class Red: public Color {
public:
    /*virtual*/void accept(Visitor*);
    
    void eye() { std::cout << "Red::eye\n"; }
    string toString(){ return "red"; }
    
    ~Red(){ if(INFORM) std::cout << "Red Destructor" << std::endl; }
};


class Blu: public Color {
public:
    /*virtual*/ void accept(Visitor*);
    
    void sky(){ std::cout << "Blu::sky\n"; }
    string toString(){ return "Blu"; }
    
    ~Blu(){ if(INFORM) std::cout << "Blu Destructor" << std::endl; }
};



class Green: public Color {
public:
    /*virtual*/ void accept(Visitor*);
    
    
    void grass(){ std::cout << "Green::grass\n"; }
    string toString(){ return "Green"; }
    
    ~Green(){ if(INFORM) std::cout << "Green Destructor" << std::endl; }
};



#endif
