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
        double 	num1,
        		num2,
        		num3,
        		num4,
        		num5,
        		sum,
        		average;
        // Add all the numbers
        cout << "This program will average out 5 numbers." << endl;
        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Enter number 2: ";
        cin >> num2;
        cout << "Enter number 3: ";
        cin >> num3;
        cout << "Enter number 4: ";
        cin >> num4;
        cout << "Enter number 5: ";
        cin >> num5;
        sum = num1 + num2 + num3 + num4 + num5;
        // Average the numbers dividing sum by total numbers
        average = sum / 5;
        // Display results
        cout << "The average is " << average;
        return 0;
}
