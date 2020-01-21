#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int grade = 0;

  cout << "Please input a grade!" << endl;
  cin >> grade;

  cout << "Your grade is: ";
  if (grade >= 90)
  {
    cout << "A" << endl;
  } else if ( grade >= 80)
  {
    cout << "B" << endl;
  } else if (grade >= 70)
  {
    cout << "C" << endl;
  } else {
    cout << "F" << endl;
  }

  return 0;
}
