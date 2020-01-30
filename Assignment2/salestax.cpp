#include <iostream>
using namespace std;
/*
 Instructions:
 Problem 4 (salestax.cpp): Implement a function called addTax.
 The function addTax has two formal parameters: taxRate, which is the amount of
 sales tax expressed as a percent; and cost, which is the cost of an item
 before tax. The function returns the value (float) of cost so that it includes
 sales tax.
 */
float addTax (float taxRate, float cost);
int main(int argc, const char * argv[]) {
    float totalCost = addTax(7.25, 50.0);
    cout << "total cost: " <<totalCost<< endl;
    return 0;
}
/* addTax - is a function of float type whose parameters include taxRate and const
            It calculates and returns the total cost after tax */
float addTax (float taxRate, float cost)
{
    float totalCost;
    totalCost = cost;
    // convert taxRate from a percent to decimal form
    taxRate = taxRate * 0.01;
    // to find the total salestax, take the initial cost times the taxRate
    cost = cost * taxRate;
    /* the total cost will be the total tax rate(which is stored in cost) plus
          the total cost */
    totalCost = cost + totalCost;
    return totalCost;

}
