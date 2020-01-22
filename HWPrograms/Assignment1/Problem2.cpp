#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
  int roomCapacity = 0;
  int attendees = 0;

  cout << "Please enter the capacity of your meeting room" << endl;
  cin >> roomCapacity;
  cout << "How many people will attend your meeting?" << endl;
  cin >> attendees;

  if (attendees <= roomCapacity)
  {
    cout << "It is legal to hold the meeting!" << endl;
    cout << "You can invite this many more people: " << (roomCapacity - attendees) << endl;
  } else {
    cout << "There are too many people to hold this meeting!" << endl;
    cout << "This many people must be excluded before you can hold this meeting: " << (attendees - roomCapacity) << endl;
  }

  return 0;

}
