#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  double quizzes [5] = {0.0, 0.0, 0.0, 0.0, 0.0};
  double avg = 0.0;

  for (int i = 0; i < 5; ++i)
  {
    cout << "Inputting for quiz " << i+1 << "/5" << endl;
    cin >> quizzes[i];
  }

  for (int i = 0; i < 5; ++i)
  {
    avg = avg + quizzes[i];
  }

  cout << "Your quiz average is: " << (avg/5) << endl;


  return 0;
}
