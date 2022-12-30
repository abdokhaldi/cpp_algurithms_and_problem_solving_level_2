// p8_digit_frequency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int PositiveNumber(string message) {
    int  Number=0;
    do {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int CheckDigit(int Number,short Digit) {
   int Remainder = 0, index=0 , dg=Digit;
    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        if (dg == Remainder) {
            index = index + 1;
       }
    }
return index ;
}
int main()
{
   int  Number= PositiveNumber("enter number : ");
   short  Digit = PositiveNumber("enter Gigit : ");
    cout << "the Digit " << Digit << " frequency is " << CheckDigit(Number, Digit) << " times ";
}

