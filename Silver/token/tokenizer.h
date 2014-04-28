//
//  tokenizer.h
//  Silver
//
//  Created by Jeremy Morgan on 2/14/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#ifndef __Silver__tokenizer__
#define __Silver__tokenizer__

#include <iostream>
#include <vector>

using namespace std;

class TokenedString {
    private:
        vector<string> contents;
    public:
        void transform(string stream);
        long size();
        string get(int index);
};

class Tokenizer {
    public:
        TokenedString read(string stream);
};

#endif /* defined(__Silver__tokenizer__) */
