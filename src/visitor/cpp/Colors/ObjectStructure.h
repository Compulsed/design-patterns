//
//  ObjectStructure.h
//  Visitor
//
//  Created by Dale Salter on 11/02/2015.
//  Copyright (c) 2015 Dale Salter. All rights reserved.
//

#ifndef __Visitor__ObjectStructure__
#define __Visitor__ObjectStructure__

#include "DEFINES.h"


#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "Color.h"
#include "Visitor.h"

using namespace std;

class ObjectStructure {
public:
    ObjectStructure(int length);
    ~ObjectStructure();
private:
    vector<Color*> set;
};


#endif /* defined(__Visitor__ObjectStructure__) */
