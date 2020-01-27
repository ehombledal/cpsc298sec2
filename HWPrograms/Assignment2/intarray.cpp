#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int numberArray [10] = {0}; //initializes array of size 10 to value of 0
  int intHolder = 0;
  for (int i = 0; i < 10; ++i)
  {
    cout << "Please input the next number in the array!" << endl;
    cin >> intHolder;
    if (intHolder >= 0) //checks if inputted number is positive
    {
      numberArray[i] = intHolder;
    } else {
      cout << "Negative numbers are not allowed in the array! Setting a value of 0 for this index." << endl;
      numberArray[i] = 0; //sets value to 0 if you input a negative
    }
  }

  cout << "Here is your finished array: ";
  for (int i = 0; i < 10; ++i)
  {
    cout << numberArray[i] << " ";
  }
  cout << endl;

  return 0;
}
