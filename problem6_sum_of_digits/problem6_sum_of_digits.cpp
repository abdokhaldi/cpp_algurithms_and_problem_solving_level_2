

#include <iostream>
#include <string>
using namespace std;
int ReadPositiveNumber(string message) {
    int Number;
    do {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int SumOfDigits(int Number) {
    int Remainder = 0,Sum =0;
    while (Number > 0) {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum = Sum + Remainder;
  }
    return  Sum ;
}
int main()
{

    cout << " the sum of digits = " 
        << SumOfDigits(ReadPositiveNumber("please enter positive number ?"));
}

