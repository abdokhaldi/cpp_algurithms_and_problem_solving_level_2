
// write a program to fill an array 
// with max size 100  
// with random Numbers 
// from 1 to 100 , Then print Averrage of  Array Numbers

#include <iostream>
using namespace std;

int RandomNumber(int From, int To) {
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From; return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}
void printArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

}

int SumNumbersOfArray(int arr[100], int arrLength) {
    int Sum = 0;

    for (int i = 0; i < arrLength; i++) {

        Sum += arr[i];
     }
    return Sum ;
}

float AverrageOfArrayNumbers(int arr[100], int arrLength) {
    return (float)SumNumbersOfArray(arr, arrLength) / arrLength ;
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "elements of array is : ";
    printArray(arr, arrLength);
    cout << " \n the Averrage  Of Array Numbers is : ";
    cout << AverrageOfArrayNumbers(arr, arrLength);

}

