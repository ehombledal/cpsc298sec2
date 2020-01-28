#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
  string userInput = "";
  istringstream inSS;
  int a[4][5] = {0};

  for (int i = 0; i < 4; ++i)
  {
    cout << "Please input the 5 numbers you want entered into this row." << endl;
    getline(cin, userInput); //gets entire line of numbers

    inSS.clear(); //clears buffer
    inSS.str(userInput); //inputs string to buffer

    for (int j = 0; j < 5; ++j)
    {
      inSS >> a[i][j]; //pulls number from buffer
    }
  }


  //PRINT ARRAY 
  for (int i = 0; i < 4; ++i)
  {
    for (int j = 0; j < 5; ++j)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
