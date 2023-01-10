// write a program to ask the user 
// to enter number as length of array
// and then fill an array with random numbers 
// then copy array to other array in reverse 
// and print them 

#include <iostream>
using namespace std;
int ReadPositiveNumber() {
    int Number=0;
    do {
        cout << " enter array length : \n ";
        cin >> Number;
    } while (Number <= 0); 
    return Number;
}

int RandomNumber(int From , int To) {
    return rand() % (To + From - 1) + From;
}

void Swap(int& A, int& B) {
    int Temp = A;
        A = B;
        B = Temp;
}

void FillRandomArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1,100);
}

void copyArrayToAnotherInReverse(int arrSource[100] , int arrDestination[100], int arrLength) { 
  
    for (int i = 0; i < arrLength ; i++){

        arrDestination[i] = arrSource[arrLength-1-i];
             
     }
}

void printArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arr2[100];

    int arrLength = ReadPositiveNumber();
    FillRandomArray(arr, arrLength);
    printArray(arr, arrLength);
    cout << endl;
    copyArrayToAnotherInReverse(arr, arr2, arrLength);
    printArray(arr2, arrLength);

}

