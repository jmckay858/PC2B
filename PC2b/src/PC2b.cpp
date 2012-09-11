// PC 2.B - Average of Values
// -------------------------
// Programmer: Jeremy F McKay
// Date: September 9, 2012
// -------------------------
// This program finds the average of 5 numbers and displays the results
//
// Note how the code does not go off to infinity, but about 70 characters.
// For example:
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890
//


#include <iostream>
using namespace std;

int main()
{
        double 	num1 = 28,
        		num2 = 32,
        		num3 = 37,
        		num4 = 24,
        		num5 = 33,
        		sum,
        		average;
        // Add all the numbers
        sum = num1 + num2 + num3 + num4 + num5;
        // Average the numbers dividing sum by total numbers
        average = sum / 5;
        // Display results
        cout << "The average is " << average;
        return 0;
}
