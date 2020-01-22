#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int myArray [10, 0];
  for (int i = 0; i < 10; ++i)
  {
    cout << "Please input the next number in the array!" << endl;
    cin >> myArray[i];
  }

  cout << "Here is your finished array: ";
  for (int i = 0; i < 10; ++i)
  {
    cout << myArray[i] << " "; 
  }

  return 0;
}
