#include <iostream>
using namespace std;

class Pet{

public:
   // default constructor
   Pet(){
     m_name = "Bob";
     m_age = 2;
     m_weight = 50;
     m_type = "dog";
   }
   //getters
   string getName();
   int getAge();
   double getWeight();
   string getType();
   // setters
   void setName(string name);
   void setAge(int age);
   void setWeight(double weight);
   void setType(string type);
private:
  // private member variables
   string m_name;
   int m_age;
   double m_weight;
   string m_type;

};
