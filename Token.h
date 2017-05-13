#ifndef TOKEN_H
#define TOKEN_H


#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

enum tokenTypes 
    {
    COMMA, 
    PERIOD, 
    Q_MARK, 
    LEFT_PAREN, 
    RIGHT_PAREN, 
    COLON, 
    COLON_DASH,
    MULTIPLY, 
    ADD, 
    SCHEMES, 
    FACTS, 
    RULES, 
    QUERIES, 
    ID, 
    COMMENT, 
    WHITESPACE,
    UNDEFINED, 
    MY_EOF
    }; //supposed to have equal sign?




class Token {
    public:
        Token() {}
        //put non default constructor here that taken in data members
        ~Token() {}
        
        //non default constructor
        Token(tokenTypes t, string s, int l) 
        {
             typeOfToken = t;
             memberTokenString = s;
             memberLineNumber = l;
        }
            
        string toString();
        vector<string> tokenVector;
    private:
        //data members: tokenType, string (?), line number
        tokenTypes typeOfToken;
        string memberTokenString;
        int    memberLineNumber;
        
        map<tokenTypes, const string> tokenMap = //data types are wrong here
            {
                {COMMA, "COMMA"}, 
                {PERIOD, "PERIOD"},
                {Q_MARK, "Q_MARK"},
                {LEFT_PAREN, "LEFT_PAREN"},
                {RIGHT_PAREN, "RIGHT_PAREN"},
                {COLON, "COLON"},
                {COLON_DASH, "COLON_DASH"},
                {MULTIPLY, "MULTIPLY"},
                {ADD, "ADD"},
                {SCHEMES, "SCHEMES"},
                {FACTS, "FACTS"},
                {RULES, "RULES"},
                {QUERIES, "QUERIES"},
                {ID, "ID"},
                //{STRING, "STRING"},
                {COMMENT, "COMMENT"},
                {WHITESPACE, "WHITESPACE"},
                {UNDEFINED, "UNDEFINED"},
                {MY_EOF, "EOF"}
            };
        
};

#endif