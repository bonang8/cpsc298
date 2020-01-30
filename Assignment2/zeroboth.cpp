#include <iostream>
using namespace std;
/*
 Instructions:
 Implement a void function called zeroBoth that has two call-by- reference
 parameters, both of which are variables of type int, and sets the values of
 both variables to 0.
 */

void zeroBoth(int& numOne, int& numTwo);
int main(int argc, const char * argv[]) {

    // num 1 and 2 are passed into zeroBoth for diagnostics to see if it will
    // output 0.
    int num1 = 2;
    int num2 = 3;
    // call the function zeroBoth
    zeroBoth(num1, num2);
    cout << "from main() num1: " << num1 << endl;
    cout << "from main() num2: " << num2 << endl;
    return 0;
}
/*zeroBoth  - void function that has two call-by- reference parameters.
  variables int numOne and numTwo are of type int, and sets the values of
  both variables to 0.*/
void zeroBoth(int& numOne, int& numTwo)
{
    numOne = 0;
    numTwo = 0;
    cout << "from zeroBoth() num1: " << numOne << endl;
    cout << "from zeroBoth() num2: " << numTwo << endl;
}
