

// write a program to Read N elements 
// then store them in araay 
// then print all array  elements 
// and ask for a number to check
// then print how many number a certain elements reapeated in that array
// 

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNnumber(string message) {
	int Number=0;
	do {
		cout << message;
	cin >> Number;
	} while (Number<=0);
	return Number;
}
void ReadArray(int Arr[100],int& arrLength) {
	 cout << " enter number of elements : ";
	 cin >> arrLength; 

	 cout << "enter elements : \n";
	for (int i = 0; i <= arrLength - 1; i++) {
		cout << "element[" << i + 1<< "] :";
		cin >> Arr[i];
	}
}
void PrintArray(int Arr[100], int ArrLength) {
	cout << "original Array : ";
	for (int i = 0; i <= ArrLength - 1; i++) {
		cout  << Arr[i] << " ";
	}
	cout << endl;
}

int TimesRepeated(int Number , int Arr[100], int arrLength) {
	int count = 0;
	for (int i = 0; i <= arrLength; i++) {
		if( Number==Arr[i] ) {
			count ++;
		}
		
	}
	return count;
}

int main()
{
	int Arr[100], arrLength, NumberToCheck;
     ReadArray(Arr, arrLength);

	 NumberToCheck = ReadPositiveNnumber("enter number to check : ");
	
	 PrintArray(Arr,arrLength);
	 cout << "the number " << NumberToCheck;
	 cout << " is repeated ";
	 cout << TimesRepeated(NumberToCheck, Arr, arrLength) << " times .";
}

