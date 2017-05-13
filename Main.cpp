//Code created by Russell Fischer on May 08 2017
//CS 236 lab 01
#include "Lexer.h"
#include "Token.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
  Lexer lexer;
  string fileName = "cs236lab1testcase1.txt";
  lexer.readFile(fileName);
  lexer.printTokens();
  return 0;
}
