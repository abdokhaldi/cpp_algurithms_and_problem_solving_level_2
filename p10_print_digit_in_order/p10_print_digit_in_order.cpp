

#include <iostream>
using namespace std;

int PositiveNumber(string message) {
    int  Number = 0;
    do {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int DigitToCheck(int Number) {
    int Remainder = 0, Reversed = 0;
    while (Number > 0) {

        Remainder = Number % 10;

        Number = Number / 10;

        Reversed = Reversed * 10 + Remainder;

    }
    return Reversed;
}

void PrintDigits(int Number) {
    int Remainder = 0;


    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }

}

int main()
{


    PrintDigits(DigitToCheck(PositiveNumber("enter number : ")));

}

