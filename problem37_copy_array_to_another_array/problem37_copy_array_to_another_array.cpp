
// write a program to fill array with  max size 100 
//with random Numbers from 1 to 100
//  copy it to another array using addArrayElements 


#include <iostream>
using namespace std;

int ReadNumber() {
    int Number = 0;
    cout << " enter Number : \n ";
    cin >> Number;
    return Number;
}


int RandomNumber(int From, int To) {
    int Random = rand() % (To - From + 1) + From;
    return Random;
}
void addArrayElements(int Number, int arr[100], int& arrLength) {
      
    arrLength++;
    arr[arrLength - 1] = Number;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
    cout << "\n enter number of elements : ";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void CopyUsingAddArrayElements(int arrSource[100] , int arrDestination[100] , int arrLength,int& arr2Length) {
   for(int i =0; i<arrLength;i++)
    addArrayElements(arrSource[i], arrDestination,arr2Length);
}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength=0,arr2Length=0;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyUsingAddArrayElements(arr,arr2,arrLength,arr2Length);

    cout << "\nArray 1 elements:\n"; 
    PrintArray(arr, arrLength);
    cout << "\nArray 2 elements after copy:\n";
    PrintArray(arr2, arr2Length);
}

