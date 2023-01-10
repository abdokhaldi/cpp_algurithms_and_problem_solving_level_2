
// this is a problem 35 Reused of problem 34

// this is a 
// write a program to fill an array with
// max size 100 with random Numbers from1 to 100 
 
// and read Number do you wand to search for 
// and return if the Number is found or not found (reuse problem 34) 



#include <iostream>
using namespace std;

int ReadPositiveNumber(string message) {
	int Number = 0;
	do {
		cout << message;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From, int To) {
	int randVar = rand() % (To - From + 1) + From;
	return randVar;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength) {
	for (int i = 0; i <= arrLength; i++) {
		arr[i] = RandomNumber(1,100);
	}
}
void printArray(int arr[100], int arrLength) {
	cout << "Array 1 Elements : \n\n";
   
	for (int i = 0; i < arrLength; i++)
		cout <<  arr[i] << " ";
}
short findNumberPositionInArray(int arr[100], int arrLength, int item) {
	
	for (int i = 0; i < arrLength ;i++) {

		if (arr[i] == item){
			return i;
		}
		
	}
	return -1;
}

bool isNumberInArray(int arr[100], int arrLength, int item) {
	return findNumberPositionInArray(arr, arrLength, item) != -1;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100], arrLength , item;
	 arrLength = ReadPositiveNumber("enter the length of array  ? : \n");
	 
	FillArrayWithRandomNumbers(arr, arrLength);
	printArray(arr, arrLength);
	cout << endl;

	item = ReadPositiveNumber("enter the number to search for : \n");
	short NumberPosition = findNumberPositionInArray(arr, arrLength, item);

	cout << " the Number you are looking for is : " << item << endl;

	if(isNumberInArray(arr,arrLength,item)){
	   
		cout << "Yes , the Number is found . " ;
     }
	else {
		
	cout << "No the Number is not found . " << char(2);}
}

