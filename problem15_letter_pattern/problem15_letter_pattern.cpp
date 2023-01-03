// problem12_inverted_N_pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int PositiveNumber(string message) {
    int Number = 0;
    do {
        cout << message;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

void PrintInvertedNumber(int Number) {

    for (int i = 65 ; i <= 65 + Number - 1; i++) {

        for (int j = 1; j <= i - 65 + 1; j++) {
            cout << char(i);
        }

        cout << "\n";
    }
}

int main()
{
    PrintInvertedNumber(PositiveNumber("enter Number \n"));
    return 0;
}

