#include "Token.h"

#include "Lexer.cpp"
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Token.h"
using namespace std;



class Lexer {
  public:
      Lexer() {}
      ~Lexer() {}

      int getlineCount();
      void setLineCount(int lineCount);
      void readFile(string fileName);
      void parseFile();
      void printTokens();
      void mapTime();
      //void saveChars(char temp);

  private:
      int lineCount;
      string temp;
      //filename data member
      
};


/*
Next Steps:
1. The map is non-functional, figure that out.
2. ReadFile is a mess, figure out how to actually make that work
3. ParseFile isn't exactly doing any parsing right now, get it to spit it
    out in the right format too though
4. You need to create a vector to store the formatted statements
5. You need a whitespace() function
6. Print business needs to be figured out
7. argc business from main, how does that work?
8. Test cases?



*/
