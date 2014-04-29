//
//  command.cpp
//  Silver
//
//  Created by Jeremy Morgan on 4/28/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#include "command.h"

namespace CommandSpace {
    /* CREATE NODE WITH { "name": "something", "val1": "something" } ON GRAPH 'graph';
     * DEC TYPE WITH val_dict ON TYPE 'identifier';
     *
     */
    
    enum declaration {
        CREATE,
        ALTER,
        DELETE,
        FIND
    } DEC;
    
    enum identifiers {
        NODE,
        EDGE,
        GRAPH
    } TYPE;
    
    enum prepositions {
        WITH,
        ON
    } PREP;
}