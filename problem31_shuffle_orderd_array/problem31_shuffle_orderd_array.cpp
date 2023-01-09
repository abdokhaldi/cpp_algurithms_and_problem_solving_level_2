
// write a program to shuffle an order array


#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {
    int Number = 0;
    do {
        cout << message;
        cin >> Number;
    } while (Number <=0);
    return Number;
}
int RandomNumber(int From ,int To) {
    return rand() % (To - From + 1) + From;
}
void Swape(int& A, int& B) {
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}
void fillArrayWith1ToN(int arr[100],int arrLength) {
    for (int i = 0; i < arrLength; i++)
        arr[i] = i + 1;
}

void ShuffleArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
        Swape(arr[RandomNumber(1, arrLength )-1] , arr[RandomNumber(1, arrLength) - 1]);
}

void printArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++)
       cout << arr[i] << " ";
}
int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = ReadPositiveNumber("enter array Length : \n");

    fillArrayWith1ToN(arr, arrLength);
    printArray(arr, arrLength);

    cout << endl;

    ShuffleArray(arr, arrLength);
    printArray(arr, arrLength);

}

