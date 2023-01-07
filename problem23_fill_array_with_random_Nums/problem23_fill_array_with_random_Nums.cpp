
// write a program to fill an array 
// with max size 100  
// with random Numbers 
// from 1 to 100

#include <iostream>

using namespace std;

int RandomNumber(int From , int To) {
	return rand() % (To - From + 1) + From;
 }

void FillArrayWithRandomNumbers(int Arr[100], int& arrLength) {
	cout << "enter Number of elements : ";
	cin >> arrLength;

	for (int i = 0; i < arrLength ; i++) {
		Arr[i] = RandomNumber(1, 100);
	}
}
void PrintArray(int Arr[100], int ArrLength) {
	
	for (int i = 0; i <= ArrLength - 1; i++) {
		cout << Arr[i] << " ";
	}
	cout <<"\n";
}
int main()
{
	srand((unsigned) time (NULL));

	int Arr[100], arrLength ;

	FillArrayWithRandomNumbers(Arr, arrLength);
	cout << "elements of array : ";
	 PrintArray(Arr,arrLength);
	

}

