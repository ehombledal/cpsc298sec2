#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  const double TON_IN_OUNCE = 35273.92;
  double cerealWeightOz = 0;
  double cerealWeightTon = 0;
  int boxesNeeded = 0;

  cout << "Enter the weight of the box of cereal in ounces" << endl;
  cin >> cerealWeightOz;

  cerealWeightTon = cerealWeightOz / TON_IN_OUNCE;
  cout << "The weight of your box of cereal in tons is: " << cerealWeightTon << endl;
  boxesNeeded = (TON_IN_OUNCE / cerealWeightOz) + 1; // +1 because you can't have half a box of cereal, and use int truncation to round down.
  cout << "You need " << boxesNeeded << " boxes of cereal to equal a ton." << endl;

  return 0;
}
