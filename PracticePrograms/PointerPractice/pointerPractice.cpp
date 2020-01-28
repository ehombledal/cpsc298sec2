#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
  int myVar = 5;
  int *myPtr = &myVar;

  cout << "my var: " << myVar << endl;
  cout << "my ptr: " << myPtr << endl;
  cout << "deref myPtr:" << *myPtr << endl;

  *myPtr = 8;
  cout << "my ptr after update: " << *myPtr << endl;

  return 0; 
}
