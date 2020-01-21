#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  double itemCost = 0.0;
  int numYears = 0;
  double percentInfl = 0.0;

  cout << "Enter the cost of your item." << endl;
  cin >> itemCost;
  cout << "Enter the number of years you wish to calculate inflation for." << endl;
  cin >> numYears;
  cout << "Enter the inflation rate. (Use perecentage format!)" << endl;
  cin >> percentInfl;

  //Changes percentage gotten as input into decimal.
  percentInfl = percentInfl / 100;

  for (int i = 0; i < numYears; ++i)
  {
    itemCost = itemCost + (itemCost * percentInfl);
  }

  cout << "Your value after " << numYears << " years of inflation is: " << itemCost << endl;
  return 0;
}
