#include "Lexer.h"
    
  // void Lexer::saveChars(char temp){
  //     stringstream ss;
  //     ss += temp;
  //   }
    
    
    void Lexer::parseFile()
    {
      stringstream charSaver;
      char currentChar;
      switch (currentChar) //should be a variable of sort sort later on
      {
        case ',':
          Token t(COMMA,",", getlineCount());
          tokenVector.pushback(t); 
          break;
          
        case '.':
          Token t(PERIOD, ".", getlineCount());
          tokenVector.pushback(t); 
          break;
          
        case '?':
          Token t(Q_MARK, "?", getlineCount())
          tokenVector.pushback(t);
          break;
        
        case '(':
          Token t(LEFT_PAREN, "(", getlineCount())
          tokenVector.pushback(t);
          break;
        
        case ')':
          Token t(RIGHT_PAREN, ")", getlineCount())
          tokenVector.pushback(t);
          break;
        
        case ':':
        //create function in here to differentiate between colon and colon dash
          Token t(COLON, ":", getlineCount())
          tokenVector.pushback(t);
          break;
        
        //case COLON_DASH: << ":-"; break;
        
        
        case '*':
          Token t(MULTIPLY, "*", getlineCount());
          tokenVector.pushback(t);
          break;
        
        case '+':
          Token t(ADD, "+", getlineCount());
          tokenVector.pushback(t);
          break;
          
        case '#';
        
        default case;
          charSaver << currentChar;
          //something
        // make switch for comment starting with #
        //use is_alpha function 
        
        /*
        case 'S';
          Token t(SCHEMES, "SCHEMES", getlineCount());
          tokenVector.pushback(t);
          break;
        
        case 'F';
          Token t(FACTS, "FACTS", getlineCount());
          tokenVector.pushback(t);
          break;
        
        case 'R';
          Token t(RULES, "RULES", getlineCount())
          tokenVector.pushback(t);
          break;
        
        case 'Q';
          Token t(QUERIES, "QUERIES", getlineCount());
          tokenVector.pushback(t);
          break;
        */
      }
      
        if (currentChar.is_alpha())
        {
          //figure out if the string is schemes, facts, rules or queries..
          //or if it's undefined, or an ID
          ;
        }
      
      
      
    }

    int Lexer::getlineCount()
    {
      return linecount;
    }

    void Lexer::setLineCount(int localLineCount)
    {
      linecount = localLineCount;
    }



    //read file stuff
    void Lexer::readFile(fileName)
    {
      
      //string s = "cs236lab1testcase1.txt";//"whateverFile.txt";
      ifstream f(fileName);           // open file
      char c;
      
      int localLineCounter = 0;
      
      
      while (f.get(c))
      {                                      // loop getting chars
        //make function to deal with 
        //call parse file    
        //f.peek()
      
        if (c == '\n')
        {
        localLineCounter = getlineCount();  // using getters and setters to interact
        localLineCounter++;                 // with private data members
        setLineCount(localLineCounter);     // incrementing line number each /n
        //continue;
        }
        
        parseFile();
        //cout << c;
                    
      
      }
       is.close();  // close file
    }

    
  

  Lexer::void printTokens()
    {
        for(int i = 0; tokenVector.size(); i++)
        {
          cout << tokenVector[i].toString();
        }
    }

  


