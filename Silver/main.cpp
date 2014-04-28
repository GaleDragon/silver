//
//  main.cpp
//  Silver
//
//  Created by Jeremy Morgan on 2/14/14.
//  Copyright (c) 2014 Jeremy Morgan. All rights reserved.
//

#include <iostream>

#include "tokenizer.h"

namespace MainSpace {
    enum shell_cmds {
        QUIT='q',
        VIEW='v',
        ACT='a'
    };
}

int main(int argc, const char * argv[])
{
    while (true){
        std::cout << ">>> ";
        
        std::string request;
        std::getline( std::cin, request );
        
        if (request.length() < 2){
            char cmd = (MainSpace::shell_cmds) request[0];
            if (cmd == MainSpace::shell_cmds::QUIT) {
                break;
            } else if (cmd == MainSpace::shell_cmds::VIEW) {
                
            } else if (cmd == MainSpace::shell_cmds::ACT) {
                
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

