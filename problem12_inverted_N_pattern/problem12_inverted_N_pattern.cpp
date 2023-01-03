// problem12_inverted_N_pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int PositiveNumber() {
    int Number = 0;
    do {
        //cout << Message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void PrintInvertedNumber(int Number) {
    
    for (int i = Number ; i >= 1; i--) {
        for(int j = 1;j<=i;j++){
       cout << i ;
      }
        cout << endl ;
    }
 }

int main()
{
     PrintInvertedNumber(PositiveNumber());
    return 0;
}

