// problem3_perfect_number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int ReadPositiveNumber(string mesage) {
    int Number;
    do {
        cout << mesage << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

bool checkPerfectNumber(int Number) {
    int sum = 0;
    for (int i = 1; i <= Number; i++) {
        if (Number % i == 0)
            sum += i;

    }
    return  Number == sum;
   
}

void PrintTypeOfNumber(int Number) {
    if (checkPerfectNumber(Number))
        cout << Number << " is Perfect \n";
    else
        cout << Number << " is Not Perfect \n";
}

int main()
{
    PrintTypeOfNumber(ReadPositiveNumber("please enter positive number ?"));
}
