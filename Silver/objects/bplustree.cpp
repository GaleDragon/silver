//
//  bplustree.cpp
//  Silver
//
//  Created by Jeremy Morgan on 4/28/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#include "bplustree.h"

bool BPlusTree::_insert(Node n){
    return false;
}

Node BPlusTree::_search(Node n){
    return n;
}

void BPlusTree::_delete(Node n){
    
}

Node BPlusTree::find(Node n){
    return _search(n);
}

BPlusTree::BPlusTree () {
    node_capacity = 7;
}