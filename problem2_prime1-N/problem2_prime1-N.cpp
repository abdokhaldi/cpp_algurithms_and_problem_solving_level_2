// problem2_prime1-N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enPrimeNotPrime{ Prime=1,NotPrime=2 };

int ReadPositiveNumber(string message) {
      int Number;
    do {
        
           cout << message << "\n";
            cin >> Number;
    } while (Number < 0);
    return Number;
}


enPrimeNotPrime CheckIfPrime(int Number) {
    double M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++) {
        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;

    }
    return enPrimeNotPrime::Prime;
}
void PrintPrimeFromOneToM(int Number ) {
    int i = 1;
    cout << "Prime Numbers From " << i << " To " << Number << " Are  : \n";
    for (i; i <= Number; i++)
        if (CheckIfPrime(i) == enPrimeNotPrime::Prime)
            cout <<  i << endl;
  }

int main()
{
    PrintPrimeFromOneToM(ReadPositiveNumber("please enter a positive Number ?"));
}

