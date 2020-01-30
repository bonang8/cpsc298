#include <iostream>
using namespace std;
/*
 Instructions:
 Write code that will fill the array a (declared below) with numbers typed
 in at the key- board. The numbers will be input five per line, on four lines
 (although your solution need not depend on how the input numbers are divided
 into lines). int a[4][5];
 */
int main(int argc, const char * argv[]) {

    // a - is a 2D array of type int that has 4 rows and 5 columns
    int a[4][5];
    // ROW - holds the row number of the array
    int ROW = 4;
    // COL - holds the columns number of the array
    int COL = 5;
    // num - is of int type that holds the number that the user enters
    int num = 0;
    // filling the for loop
    for(int i = 0; i < ROW; ++i)
    {

        for(int j = 0; j < COL; ++j)
        {
            cout << "Enter a number: ";
            cin >> num;
            a[i][j] = num;
        }
    }

    // outputting the 2D array
    for(int i = 0; i < ROW; ++i)
    {

        for(int j = 0; j < COL; ++j)
        {
            cout << "ROW "<< i << " COL " << j << ": "<< a[i][j]<< endl;
        }

    }
    return 0;
}
