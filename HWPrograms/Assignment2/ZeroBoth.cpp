#include <iostream>

using namespace std;

void zeroBoth(int& first, int& second)
{
  cout << "Your values are: " << first << ", " << second << endl;
  cout << "Zeroing..." << endl;
  first = 0;
  second = 0;
}

int main(int argc, char **argv)
{
  int num1 = 0;
  int num2 = 0;

  cout << "What do you want you first value to be?" << endl;
  cin >> num1;
  cout << "What do you want you second value to be?" << endl;
  cin >> num2;
  zeroBoth(num1, num2);
  cout << "After zeroBoth, your values are now: " << num1 << ", " << num2 << endl;

  return 0;
}
