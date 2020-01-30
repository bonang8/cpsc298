#include <iostream>
#include "Pet.h"
using namespace std;

//getters
   // - return the member variables
string Pet::getName()
{
   return m_name;
}

int Pet::getAge(){
   return m_age;
}
double Pet::getWeight()
{
   return m_weight;
}
string Pet::getType(){
   return m_type;
}
// setters
    // - modify/mutate the member variable to be assigned to the value in parameter
void Pet::setName(string name)
{
  m_name = name;
}
void Pet::setAge(int age){
  m_age = age;
}
void Pet::setWeight(double weight)
{
  m_weight = weight;
}
void Pet::setType(string type)
{
  m_type = type;
}
