
//an h file is a header file!
//has all the class definitions, includes, and using


#include <iostream>
#include <string>
using namespace std;

//classes are declared like this. Only declare function names up here.
class VowelCounter
{
  public:
    VowelCounter();
    int countVowels(string input);


    //normally you have get and sets as well

  private:
    //no private members, normally member variables go here 
}; //NEED A SEMICOLON AFTER CLASS DECLARATIONS
