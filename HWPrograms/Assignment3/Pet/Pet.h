#include <iostream>
#include <string>
using namespace std;

class Pet
{
  public:
    Pet(); //default constructor
    Pet(string name, int age, string type, double weight); //overloaded
    void print(); //Prints info about pet.

    //ACCESSORS//
    string getName();
    int    getAge();
    string getType();
    double getWeight();

    //MUTATORS//
    void setName   (string name);
    void setAge    (int age);
    void setType   (string type);
    void setWeight (double weight);

  private:
    string m_name;
    int    m_age;
    string m_type;
    double m_weight;

};
