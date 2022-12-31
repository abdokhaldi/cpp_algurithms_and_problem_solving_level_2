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

int CheckDigit(short Digit,int Number) {
   short Remainder = 0 , index=0 ;
    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        if (Digit == Remainder) {
            index++;
        }
    }

return index ;
}
void PrintAllDigitFrequency(int Number) {
    
    for(int i=0;i <10;i++){
        short DigitFrequency = 0;
        DigitFrequency = CheckDigit(i,Number);
        if (DigitFrequency > 0) {
            cout << "the Digit " << i << " frequency is " << DigitFrequency << " times " << endl;
        }
    }
}
int main()
{
   int  Number= PositiveNumber("enter number : ");
   PrintAllDigitFrequency(Number);

}

