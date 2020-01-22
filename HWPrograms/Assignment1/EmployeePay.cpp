#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  double hours = 0;
  double wageEarned = 0;

  const double WAGE = 16.00;
  const double OVERTIME_RATE = 1.5;
  const int MAX_HOURS_PER_WEEK = 40;

  const double SOCIAL_SEC_TAX = 0.06;
  const double FED_INC_TAX = 0.14;
  const double STATE_TAX = 0.05;
  const int MED_INSURANCE_PER_WEEK = 10;

  double amountDeducted = 0;

  cout << "How many hours did you work this week?" << endl;
  cin >> hours;
  if (hours > MAX_HOURS_PER_WEEK)
  {
    cout << "You worked overtime this week! Earned 1.5x pay for " << (hours - MAX_HOURS_PER_WEEK) << " hours." << endl;
    cout << "Regular Pay: $" << (WAGE * MAX_HOURS_PER_WEEK) << endl; //calculates up to MAX_HOURS pay
    cout << "Overtime Pay: $" << (((hours-MAX_HOURS_PER_WEEK) * WAGE) * OVERTIME_RATE) << endl; //calculates overtime pay
    wageEarned = (MAX_HOURS_PER_WEEK * WAGE) + (((hours-MAX_HOURS_PER_WEEK) * WAGE) * OVERTIME_RATE);

  } else {
    cout << "You didn't work overtime this week." << endl;
    cout << "Regular Pay: $" << (hours * WAGE) << endl;
    wageEarned = (hours * WAGE);
  }

  cout << "You earned $" << wageEarned << " in gross pay this week." << endl;

  cout << (SOCIAL_SEC_TAX * wageEarned) << " dollars were deducted for Social Security Taxes." << endl;
  amountDeducted = amountDeducted + (SOCIAL_SEC_TAX * wageEarned);

  cout << (FED_INC_TAX * wageEarned) << " dollars were deducted for Federal Income Tax." << endl;
  amountDeducted = amountDeducted + (FED_INC_TAX * wageEarned);

  cout << (STATE_TAX * wageEarned) << " dollars were deducted for State Taxes." << endl;
  amountDeducted = amountDeducted + (STATE_TAX * wageEarned);

  cout << MED_INSURANCE_PER_WEEK << " dollars were deducted for Medical Insurance Expenses." << endl;

  cout << "Amount you take home this week: $" << wageEarned - amountDeducted << endl;

  return 0;

}
