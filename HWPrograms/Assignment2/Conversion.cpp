#include <iostream>
#include <string>

using namespace std;

const double METER_TO_FOOT = 0.3048;
const double CM_TO_METER   = 100.0;
const double INCH_TO_FOOT  = 12.0;

string userInput = "";
double userInch  = 0.0;
double userFeet  = 0.0;

int convertedCentimeter = 0;
int convertedMeter      = 0;

void getUserInput()
{
  userInput = "";
  userInch  = 0.0;
  userFeet  = 0.0;

  cout << "Please enter \"exit\" to exit, or \"C\" to continue" << endl;
  cin >> userInput;
  if (userInput != "exit")
  {
    cout << "Enter how many feet: ";
    cin >> userFeet;
    cout << "Enter how many inches: ";
    cin >>userInch;
    cout << endl;
  }
}

void calculate()
{
  double totalFeet = userFeet + (userInch/INCH_TO_FOOT);
  double meterHolder = totalFeet*METER_TO_FOOT;

  convertedMeter = meterHolder; //truncates double to int for output 
  convertedCentimeter = (meterHolder - convertedMeter) * CM_TO_METER; //uses difference between int truncation and double value to get decimal
}

void printOutput()
{
  cout << userFeet << " feet, " << userInch << " inches is equal to " << convertedMeter << " meter(s), " << convertedCentimeter << " centimeters." << endl;
}


int main(int argc, char **argv)
{
  getUserInput();
  while (userInput != "exit")
  {
    calculate();
    printOutput();
    getUserInput();
  }

  cout << "Goodbye!" << endl;


  return 0;
}
