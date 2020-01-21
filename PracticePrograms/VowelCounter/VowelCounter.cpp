
#include "VowelCounter.h" //includes header file

VowelCounter::VowelCounter() //default constructor
{
  //allows you to initialize default values every time an object of this type is made.
}

//syntax for filling in the methods.
int VowelCounter::countVowels (string input)
{
  int count = 0;
  char c = '\0';
  for(int i = 0; i < input.size(); ++i)
  {
    c = tolower(input[i]);
    if ( c == 'a')
    {
      count++;
    } else if (c == 'e')
    {
      count++;
    } else if (c == 'i')
    {
      count++;
    } else if (c == 'o')
    {
      count++;
    } else if (c == 'u')
    {
      count++;
    }
  }
    return count;
}
