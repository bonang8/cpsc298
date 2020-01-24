#include <iostream>
using namespace std;
/*
  Instructions:
  A metric ton is 35,273.92 ounces. Write a program that will read the weight
  (console input) of a package of breakfast cereal in ounces and output the
  weight in metric tons as well as the number of boxes needed to yield one
  metric ton of cereal.
*/
int main()
{

    // weightOunces:
    //    weight (console input) of a package of breakfast cereal in ounces
    float weightOunces = 0;
    // ouncesPerMetricTon:
    //    A metric ton is 35,273.92 ounces.
    float ouncesPerMetricTon = 35273.92;
    // numberOfBoxes:
    //     holds the number of boxes
    //int numberOfBoxes = 0;
    cout << "Enter the weight: "<< endl;
    // read the weight (console input) of a package of breakfast cereal in ounces
    cin >> weightOunces;
    float weightMetricTons = weightOunces/ouncesPerMetricTon;
    // output the weight in metric tons
    cout << weightMetricTons << " metric ton"<< endl;
    //number of boxes needed to yield on metric ton of cereal
    // weight in metric tons of one box * number of boxes = one metric ton
    // number of boxes = one metric ton/ weight of one box in metric tons
    int boxes = 1.0/weightMetricTons;
    cout << "number of boxes: " << boxes << endl;


     return 0;


}
