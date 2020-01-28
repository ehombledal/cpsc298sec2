
#include "Pet.h"

Pet::Pet() //Default Constructor
{
  m_name = "NULL";
  m_age = 0;
  m_type = "NULL";
  m_weight = 0.0;
}

Pet::Pet(string name, int age, string type, double weight) //overloaded constructor
{
  m_name = name;
  m_age = age;
  if (type == "cat" || type == "dog") //only allows cats and dogs to be valid pets. 
  {
      m_type = type;
  } else {
    cout << type << " is not a valid animal! Defaulting to dog." << endl;
  }
  m_weight = weight;

}

void Pet::print()
{
  cout << m_name << " is a " <<
          m_age << " year old " <<
          m_type << " who weighs " <<
          m_weight << " lbs." << endl;
}

//ACCESSORS//
string Pet::getName()
{
  return m_name;
}

int Pet::getAge()
{
  return m_age;
}

string Pet::getType()
{
  return m_type;
}

double Pet::getWeight()
{
  return m_weight;
}

//MUTATORS

void Pet::setName(string name)
{
  m_name = name;
}

void Pet::setAge(int age)
{
  m_age = age;
}

void Pet::setType(string type)
{
  if (type == "cat" || type == "dog") //ensures only cats and dogs are valid pets.
  {
      m_type = type;
  } else {
    cout << type << " is not a valid animal! Defaulting to dog." << endl;
  }
}

void Pet::setWeight(double weight)
{
  m_weight = weight;
}
