
// write a program to fill an array 
// with max size 100  
// with random Numbers 
// from 1 to 100 , Then print Max Number in Array

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

int MaxNumberInArray(int arr[100], int arrLength) {
    int Max = 0;

    for (int i = 0; i < arrLength; i++) {
        if (arr[i] > Max){
           Max = arr[i];
        } 
        
    }
    return Max;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength; 

    FillArrayWithRandomNumbers(arr,arrLength);

    cout << "elements of array is : ";
    printArray(arr, arrLength);
    cout << " \n the Max Number is : ";
    cout << MaxNumberInArray(arr, arrLength);

}

