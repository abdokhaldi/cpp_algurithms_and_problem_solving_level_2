

// write a program to fill an array with
// max size 100 with random Numbers from1 to 100 
 
// read Number and return its index in array if found
// otherwise return -1



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

	if(findNumberPositionInArray(arr, arrLength, item) == -1){
	   cout << "the Number not found . " << char(2);
     }
	else {
		cout << " the Number found at Position : " << NumberPosition << endl;
		cout << "the Number found its order : " << NumberPosition +1;
	}
}

