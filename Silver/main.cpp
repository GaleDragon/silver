//
//  main.cpp
//  Silver
//
//  Created by Jeremy Morgan on 2/14/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#include <iostream>

#include "tokenizer.h"

int main(int argc, const char * argv[])
{
    enum shell_cmds {
        QUIT='q',
        VIEW='v',
        ACT='a'
    };
    
    while (true){
        std::cout << ">>> ";
        
        std::string request;
        std::getline( std::cin, request );
        
        if (request.length() < 2){
            char cmd = (shell_cmds) request[0];
            if (cmd == QUIT) {
                break;
            } else if (cmd == VIEW) {
                
            } else if (cmd == ACT) {
                
            } else {
                std::cerr << "Command not recognized\n";
            }
        }
        else {
            Tokenizer t = Tokenizer();
            TokenedString tok = t.read( request );
            for (int i=1; i < tok.size(); i++) {
                std::cout << tok.get(i) << "\n";
            }
        }
    }
    return 0;
}

