
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

  private:
    //no private members
}; //NEED A SEMICOLON AFTER CLASS DECLARATIONS
