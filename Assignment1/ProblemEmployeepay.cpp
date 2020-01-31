#include <iostream>
using namespace std;
/*
   Instructions:
   An employee is paid at a rate of $16.00 per hour for regular hours worked in
   a week. Any hours over that are paid at the overtime rate of one and one-half
   times that. From the worker’s gross pay, 6% is withheld for Social Security
   tax, 14% is withheld for federal income tax, 5% is withheld for state income
   tax, and $10 per week is withheld for medical insurance. Write a program that
   will read in the number of hours worked in a week as input and that will
   then output the worker’s gross pay, each withholding amount, and the net
   take-home pay for the week.
*/

int main()
{

// hours worked:
   // - holds the amount of hours worked
double hoursWorked = 0;
// rate:
  // - is the rate at which the employee is payed
double rate = 16.0;
// overtimeHoursWorked
   // - is the amount of hours worked overtime.
double overtimeHoursWorked = 0;
// overtimePay
   // - is the amount of pay for hours worked overtime.
double overtimePay = 0;
// grossPay
   // - is the worker's gross pay
double grossPay = 0;
// socialSecurityTax
   // - social security tax
double socialSecurityTax = 0;
// federalIncomeTax
   // - federalIncomeTax
double federalIncomeTax = 0;
// stateIncomeTax
    // - state income tax
double stateIncomeTax = 0;
// medicalInsurance
     //- holds the medicalInsurance amount deducted:  $10 from pay
int medicalInsurance = 10;
// netPay
    // - the total pay including overtime pay, tax deductions and medical insurance.
double netPay = 0;

// Write a program that will read in the number of hours worked in a week as input.
// STEP 1: read in the number of hours worked in the week
cout << "Enter the number of hours worked this week: ";
cin >> hoursWorked;
// STEP 2: output worker's gross pay
// grossPay = hoursWorked * rate;
//  if (hoursWorked > 40)
        // overtimeHoursWorked = hoursWorked - 40;
       // overtimePay = overtimeHoursWorked * 1.5
       // grossPay = totalHoursWorked + overtimePay;
if (hoursWorked > 40)
{
   grossPay = 40 * rate;
   overtimeHoursWorked = hoursWorked - 40;
   overtimePay = overtimeHoursWorked * rate * 1.5;
   grossPay += overtimePay;
   cout << "grossPay: $"<< grossPay<< endl;
}
else
{
   grossPay = hoursWorked * rate;
   cout << "grossPay with no overtime pay: $"<< grossPay<< endl;
}
// STEP 3: CALCULATING
// 6% is withheld for Social Security tax,
// 14% is withheld for federal income tax,
// 5% is withheld for state income tax, and
// $10 per week is withheld for medical insurance.
socialSecurityTax = grossPay * 0.06;
cout << "Social security tax: " << socialSecurityTax<< endl;
federalIncomeTax = grossPay * 0.14;
cout << "federal income tax: " << federalIncomeTax << endl;
stateIncomeTax = grossPay * 0.05;
cout << "state income tax: " << stateIncomeTax << endl;
// STEP 4 : TOTAL NET PAY
netPay = grossPay - (socialSecurityTax + federalIncomeTax + stateIncomeTax + medicalInsurance);
cout << "Net take-home pay for week: $" << netPay << endl;
return 0;
}
