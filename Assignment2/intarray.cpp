#include <iostream>
using namespace std;

/*
 Instructions:
 Write a program that will read up to ten nonnegative integers
  into an array called numberArray and then write the integers
  back to the screen (console output). For this exercise you need
  not use any functions.
 */

int main(int argc, const char * argv[]) {
    // numberArray - is an array of type int that holds the nonnegative integers.
    int numberArray[10];
    // userNum - is an int that holds the numbers that the user enters.
    int userNum;
    //read up to ten nonnegative integers
    cout << "Enter up to 10 numbers: " << endl;
    for( int i = 0; i < 10; ++i)
    {
        cin >> userNum;
        //the if statement checks if the number is positive.
        if(userNum > 0){
        numberArray[i] = userNum;

        }
        else
        {
            // if the number is negative the --i will prevent i from incrementing
            // ,hence the next positive integer will remain at the correct index.
            --i;
        }
    }
    //output the numbers stored in the array
    for( int i = 0; i < 10 ; ++i)
    {
            cout << "At index " << i << " : "<< numberArray[i] << endl;
    }
    return 0;
}
