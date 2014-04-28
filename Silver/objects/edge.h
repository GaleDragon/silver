//
//  edge.h
//  Silver
//
//  Created by Jeremy Morgan on 2/14/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#ifndef __Silver__edge__
#define __Silver__edge__

#include <iostream>
#include "node.h"

class Edge {
    private:
    Node n1;
    Node n2;
    public:
    Node travel(Node start);
};

#endif /* defined(__Silver__edge__) */
