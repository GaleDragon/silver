//
//  tokenizer.cpp
//  Silver
//
//  Created by Jeremy Morgan on 2/14/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include "tokenizer.h"

#include "token_enum.h"


void TokenedString::transform(string stream) {
    contents = vector<string>();
    char * cstr = new char [stream.length()+1];
    std::strcpy (cstr, stream.c_str());
    char * p = std::strtok (cstr," ");
    while (p!=0)
    {
        contents.push_back(p);
        p = strtok(NULL," ");
    }
}

long TokenedString::size()
{
    return contents.size();
}

string TokenedString::get(int index)
{
    return contents.at(index);
}


TokenedString Tokenizer::read(string stream) {
    TokenedString t = TokenedString();
    t.transform(stream);
    return t;
}