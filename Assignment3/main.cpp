#include <iostream>
#include "Pet.h"
using namespace std;
/*
   Instructions:
   Create a class called Pet with all the necessary files (.h , .cpp, etc.)
   This class should have member variables name (string), age (int),
   type ([‘dog’, ‘cat’]) (string) and weight (double). Make sure to include the
   appropriate accessor (getters), mutator (setters). Once the Pet class has
   been implemented, create two instances of Pet and print their details to
   console output.
*/
int main()
{
  // create two instances of Pet
  Pet pet;
  Pet pet2;
  //print first instance of Pet details to console output.
  cout << "name: "<< pet.getName() << endl;
  cout << "age: "<< pet.getAge()<< endl;
  cout << "type: " << pet.getType()<< endl;
  cout << "weight: "<< pet.getWeight()<< endl;
  string name = "Lucky";
  int age = 3;
  string type = "cat";
  double weight = 30.0;
  // lets change the initial values from the constructor by utilizing the setters
  pet2.setName(name);
  pet2.setAge(age);
  pet2.setType(type);
  pet2.setWeight(weight);
  cout << endl;
  //print second instance of Pet details to console output.
  cout << "name: "<< pet2.getName() << endl;
  cout << "age: "<< pet2.getAge()<< endl;
  cout << "type: " << pet2.getType()<< endl;
  cout << "weight: "<< pet2.getWeight()<< endl;
  return 0; 
}
