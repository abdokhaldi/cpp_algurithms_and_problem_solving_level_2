
// write a program to fill an array 
// with max size 100  
// with random Numbers 
// from 1 to 100 , Then print  Array Numbers and then
// copy prime Numbers to another array

#include <iostream>
#include <string>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

int RandomNumber(int From, int To) {
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From; return randNum;
}

enPrimeNotPrime CheckIfPrime(int Number) {
    double M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++) {
        if (Number % Counter == 0)
            return enPrimeNotPrime::NotPrime;

    }
    return enPrimeNotPrime::Prime;
}


void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}


void CopyOnlyPrimeNumber(int arrSource[100], int arrDestination[1000], int arrLength,int& arr2Length) {
    int count = 0;
    for (int i = 0; i < arrLength ; i++){
        if(CheckIfPrime(arrSource[i]) == enPrimeNotPrime::Prime){
        arrDestination[count] = arrSource[i] ; 
        count++;
       }
    }
    arr2Length = --count;
}

void printArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength;
//
    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100] , arr2Length=0;
    CopyOnlyPrimeNumber(arr, arr2, arrLength,arr2Length);

    cout << "elements of array is : ";
    printArray(arr, arrLength);
    cout << " \n the copy of Array is : ";
    printArray(arr2, arr2Length);

}



