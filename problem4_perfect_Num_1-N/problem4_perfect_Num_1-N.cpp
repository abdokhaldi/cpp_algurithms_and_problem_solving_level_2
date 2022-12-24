// problem4_perfect_Num_1-N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int ReadPositiveN(string Message)
{
    int Answer = 0;
    cout << Message << endl;
    cin >> Answer;
    return Answer;
}

bool checkPerfectNumber(int Number) {
    int sum = 0;
    for (int i = 1; i < Number; i++) {
        if (Number % i == 0)
            sum += i;
     }
    return  Number == sum;
}
void PrintTypeOfNumber(int Number) {
    for (int i = 1; i <= Number; i++) {
        if (checkPerfectNumber(i)) {
            cout << i << endl;
        }
    }
}


int main()
{
    PrintTypeOfNumber(ReadPositiveN("read number : "));
}
