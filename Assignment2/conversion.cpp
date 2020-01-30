#include <iostream>
using namespace std;
/*
 Instructions:
 Write a program that will read in a length in feet and inches and output the
 equivalent length in meters and centimeters. Use at least three functions: one
 for user input, one or more for calculating, and one for output(console).
 Include a loop that lets the user repeat this computation for new input values
 until the user says he or she wants to end the program (user has to type exit).
 There are 0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches
 in a foot.
 */
float userInput();
float CalcFtToMeters(float feet);
void displaySplitInToMetersAndCm(float decimalMeters);
int main(int argc, const char * argv[]) {
    /* userRepeat - is of string type that takes in the user input of whether to
                     repeat program or exit */
    string userRepeat;
    // the following while loop repeats the program until the user types "exit"
    while(userRepeat != "exit")
    {
        float inches = userInput();
        // converts the inches from userInput to feet
        float feet = inches/12.0;
        // decimalMeters - holds the total meters
        float decimalMeters = CalcFtToMeters(feet);
        // displaySplitInToMetersAndCm - displays meters and centimeters
        displaySplitInToMetersAndCm(decimalMeters);
        // prompt user to continue or exit
        cout << "type exit to quit or press any key to continue: " << endl;
        cin >> userRepeat;
    }
    return 0;
}

/*
  userInput()
    - prompts the user to enter the length in feet and inches
    - then returns the the total length in inches
*/
float userInput()
{
    float feet = 0;
    float inches = 0;
    float totalInches = 0;
    cout << "Enter the length(ft): ";
    cin >> feet;
    cout << "Enter the inches(in): ";
    cin >> inches;
    // add feet and inches
    // the total should be in inches
    totalInches = inches + (feet*12);
    return totalInches;
}

/*
    CalcFtToMeters()
        - calculates feet to meters and returns the total meters
*/
float CalcFtToMeters(float feet)
{
    cout << "Feet: " << feet<< endl;
    cout << "converting feet to meters" << endl;
    float meters = feet*0.3048;
    return meters;
}

/*
   displaySplitInToMetersAndCm()
      - takes the decimalMeters as a parameter and cast the meters to an int.
      this allows us to calculate the fractional part left over from meters
      , so if meters is 1.78, the fractional part would calculate 0.78.
      Then, convert to centimeters. Finally, it displays the meters and centimeters
*/
void displaySplitInToMetersAndCm(float decimalMeters)
{
    float meters = int(decimalMeters);
    //calculate the fractional part left over from meters
    float fractionalPart = decimalMeters - int(decimalMeters);
    // convert fractionalPart to centimeters
    float centimeters = fractionalPart * 100;
    // display meters and centimeters
    cout << "meter(s): "<< meters<< " centimeter(s): " << centimeters<< endl;

}
