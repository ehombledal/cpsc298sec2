#include <iostream>

using namespace std;

float addTax(float taxRate, float cost)
{
  float tot = 0.0;
  tot = cost + ((taxRate/100) * cost); //converts tax rate to decimal for multiplication, and then adds original cost 
  return tot;
}

int main(int argc, char **argv)
{
  float tax = 0.0;
  float itemCost = 0.0;
  float total = 0.0;
  cout << "What is the cost of your item before tax?" << endl;
  cin >> itemCost;
  cout << "What is the sales tax on the item? (Write as percent)" << endl;
  cin >> tax;

  total = addTax(tax, itemCost);
  cout << "Your total is: $" << total << endl;
  return 0;
}
