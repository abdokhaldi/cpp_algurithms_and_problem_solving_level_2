// write a program to dynamically read Numbers and save them in array
// Max size of array is 100,  alocate simi-dynamic array length
#include <iostream>

using namespace std;

int ReadNumber() {
    int Number = 0;
        cout << " enter Number : \n ";
        cin >> Number;
        return Number;
}

void addArrayElements(int Number, int arr[100], int& arrLength) {

    arrLength++;
    arr[arrLength - 1] = Number;
}

void InputUserToArray(int arr[100], int& arrLength) {
    bool addMore = true;
    do {
            addArrayElements(ReadNumber(), arr, arrLength),
            cout << "do you want to add more element ? No[0] Yes[1] ";
            cin >> addMore;
    } while (addMore);
}  

void printArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " " ; 
}

int main()
{
    int arr[100], arrLength=0;
    
    
    InputUserToArray(arr, arrLength);
    cout << "the length of array is : " << arrLength << endl;
    cout << "array elements is : ";
    printArray(arr, arrLength);
}

