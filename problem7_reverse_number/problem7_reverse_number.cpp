// problem7_reverse_number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string message) {
    int Number=0;
    do{
    cout << message << endl;
    cin >> Number;
    } while (Number <= 0);
    return Number;
}
 
int ReverseNumber(int number) {
    int Remainder = 0, ReversedNumber=0;
    while (Remainder > 0) {
        Remainder = number % 10;
        number = number / 10 ;
        ReversedNumber = ReversedNumber * 10 + Remainder;
    }
    return ReversedNumber;
}
int main()
{
   cout << "the revers of number is "
       << ReverseNumber(ReadPositiveNumber("enter positive number?"));
}
