
// write a program to fill array two arrays  
// with max size 100  
// with random Numbers 
// from 1 to 100 , Then  sum their elements to third array and print  the result


#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message ) {
    int  Number=0;
    do {
        cout << message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int RandomNumber(int From, int To) {
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From; return randNum;
}




void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
   // cout << "\nEnter number of elements:\n";
   // cin >> arr1Length;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}


void printArray(int arr[100], int arrLength) {
    cout << "array 1 elements : ";
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

}

void sum2ArraysToAnotherArray(int arr1[100], int arr2[100], int arrSum[100], int arr1Length) {
    for (int i = 0; i <= arr1Length;i++) {
        arrSum[i] = arr1[i] + arr2[i]; 
    }
}

int main()
{
    srand((unsigned)time(NULL));
    
    int arr1[100], arr2[100],arrSum[100];
    int arrLength = ReadPositiveNumber("enter the length of array : ");
    FillArrayWithRandomNumbers(arr1, arrLength);
    FillArrayWithRandomNumbers(arr2, arrLength);

    printArray(arr1, arrLength);
    cout << endl;
    printArray(arr2, arrLength);  
   
    sum2ArraysToAnotherArray(arr1,arr2,arrSum,arrLength);
    cout << " sum of array 1 and array 2 : ";
   printArray(arrSum, arrLength); 

}



