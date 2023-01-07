
// write a program to fill an array 
// with max size 100  
// with random Numbers 
// from 1 to 100 , Then print Averrage of  Array Numbers

#include <iostream>
#include <string>

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

void CopyArray(int arrSource[100], int arrDestination[1000] ,int arrLength ) {
    for (int i = 0; i < arrLength; i++)
        arrDestination[i] = arrSource[i];
}




int main()
{
    srand((unsigned)time(NULL));
    int arr[100], arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    int arr2[100];
    CopyArray(arr,arr2,arrLength);

    cout << "elements of array is : ";
    printArray(arr, arrLength);
    cout << " \n the copy of Array is : ";
    printArray(arr2,arrLength);

}

