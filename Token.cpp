#include "Token.h"

    Token::string toString(){
        stringstream ss;
        ss << "(" << typeOfToken << ", " << "\"" << memberTokenString <<
        "\"" << ", " << memberLineNumber << ")" << endl;
        
    }
    
 
//here you need something to spit out results formatted like this:
// (STRING, "'M'", 2)