
#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ifstream inFS;     // Input file stream
   ofstream outFS;    //output file stream
   string fileNum;      // Data value from file. It is more convenient to have input stream as string, and convert it
   string fName = argv[1]; //filename

   //filename must be entered as command line parameter, otherwise error
   {
     if (argc < 2)
     {
       cout << "invalid command line params" << endl;
       return 1; // 1 indicates error

     }
   }


   // Try to open file
   cout << "Opening file " << fName << endl;

   inFS.open(fName); //can also have this where numFile is a String, and you get the input from command line.
   outFS.open("myOutput.txt"); //also way to append

   if (!inFS.is_open()) {
      cout << "Could not open file " <<fName << endl;
      return 1; // 1 indicates error
   }


   //Print read file data to output
   cout <<"Reading and printing data" << endl;

   while (!inFS.eof())
   {
     inFS >> fileNum;
     if (!inFS.fail())
     {
       cout << "Printing to console" << endl;
       cout << "num:" << fileNum << endl;

       cout << "printing to file" << endl;
       outFS << fileNum << endl; //writes to file.
     }
   }

   cout << "Closing file" << fName << endl;
   inFS.close(); // Done with file, so close it
   outFS.close(); //close this one too.

   return 0;
}
