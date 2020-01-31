#include <iostream>
using namespace std;
/*
  Instructions:
  It is difficult to make a budget that spans several years, because prices are
  not stable. If your company needs 200 pencils per year, you cannot simply use
  this year’s price as the cost of pencils two years from now. Because of
  inflation the cost is likely to be higher than it is today. Write a program to
  gauge the expected cost of an item in a specified number of years. The program
  asks for the cost of the item, the number of years from now that the item will
  be purchased, and the rate of inflation. The program then outputs the
  estimated cost of the item after the specified period. Have the user enter the
  inflation rate as a per- centage, such as 5.6 (percent). Your program should
  then convert the percentage to a fraction, such as 0.056, and should use a
  loop to estimate the price adjusted for inflation. (Hint: Use a loop.)
*/
int main()
{

// itemCost
     // - holds the cost of the item
double itemCost = 0;
// yearsTillPurchase
     // - holds the number of years from now that the item will be purchased.
int yearsTillPurchase = 0;
// yearCount
    // variable use to count the number of years in a loop
int yearCount = 0;
// rateOfInflation
    // holds the rate of inflation
double rateOfInflation = 0;
// costRate
    // holds the itemCost * rateOfInflation
double costRate;
//STEP 1:
// The program asks for the cost of the item, the
// number of years from now that the item will be purchased, and the rate of
// inflation.
cout << "Enter the cost of the item: " << endl;
cin >> itemCost;
cout << "Number of years form now the item will be purchased: "<< endl;
cin >> yearsTillPurchase;
cout << "Enter the rate of inflation as a percentage: " << endl;
cin >> rateOfInflation;
// Have the user enter the inflation rate as a per-centage, such as 5.6 (percent).
rateOfInflation = rateOfInflation * 0.01;

// The program then outputs the estimated cost of the item after the specified period.
while(yearCount < yearsTillPurchase)
{
   costRate = itemCost * rateOfInflation;
   itemCost = costRate + itemCost;
   yearCount++;
}
cout << "The price adjusted after inflation: " << itemCost << endl;
return 0;

}
