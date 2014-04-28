//
//  bplustree.h
//  Silver
//
//  Created by Jeremy Morgan on 4/28/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#ifndef __Silver__bplustree__
#define __Silver__bplustree__

#include <iostream>
#include "node.h"

class BPlusTree {
private:
    int node_capacity;
    bool _insert(Node n);
    Node _search(Node n);
    bool _modify(Node before, Node after);
    void _delete(Node n);
public:
    BPlusTree ();
    Node find(Node n);
};

#endif /* defined(__Silver__bplustree__) */
