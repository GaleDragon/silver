//
//  token_enum.h
//  Silver
//
//  Created by Jeremy Morgan on 2/14/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#ifndef __Silver__token_enum__
#define __Silver__token_enum__

#include <iostream>

enum operations {
    SILVER_CREATE_NODE,
    SILVER_CREATE_EDGE,
    SILVER_READ_NODE,
    SILVER_READ_EDGE,
    SILVER_UPDATE_NODE,
    SILVER_UPDATE_EDGE,
    SILVER_DELETE_NODE,
    SILVER_DELETE_EDGE
};

enum op_types {
    ADD,
    GET,
    SET,
    RM
};

enum resource_types {
    NODE,
    EDGE
};

enum identifiers {
    WITH_VALUES,
    WHERE
};

enum logicals {
    AND,
    OR,
    XOR
};

enum destination {
    TO
};

#endif /* defined(__Silver__token_enum__) */
