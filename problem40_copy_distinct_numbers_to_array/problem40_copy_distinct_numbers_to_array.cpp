
/// write a program to fill array with  Numbers 
// then copy distinct Numbers to  array 


#include <iostream>
using namespace std;


void addArrayElements(int Number, int arr[100], int& arrLength) {

    arrLength++;
    arr[arrLength - 1] = Number;
}
void FillArray(int arr[100], int& arrLength) {
    arrLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 40;
    arr[3] = 40;
    arr[4] = 70;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 30;
    arr[8] = 30;
    arr[9] = 30;
}
void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] == Number) 
            return i;  //return the index   
       
    }
    //if you reached here, this means the number is not foundreturn 
     return -1; 
}
bool IsNumberInArray(int Number, int arr[100], int arrLength) { 
    return FindNumberPositionInArray(Number, arr, arrLength) != -1; 
} 

void CopyDistinctNumbers(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength) {
    for (int i = 0; i < SourceLength; i++) {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength) )
            addArrayElements(arrSource[i], arrDestination, DestinationLength);
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arrSource[100], arrDestination[100], SourceLength = 0, DestinationLength = 0;

    FillArray(arrSource, SourceLength);

   
    CopyDistinctNumbers(arrSource, arrDestination, SourceLength, DestinationLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arrSource, SourceLength);
    cout << "\nArray 2 Distinct Elements :\n";
    PrintArray(arrDestination, DestinationLength);
}

