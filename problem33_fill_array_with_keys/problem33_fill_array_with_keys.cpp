// write a program to read how many keys to generate 
// and fill them in array 
// then print them on the screen

#include <iostream>
using namespace std;

enum enRandom{smallLetter,capitalLetter,specialChar ,digit};

int ReadPositiveNumber() {
	int Number =0;
	do {
		cout << "How many keys do you want ? : \n";
		cin >> Number;
		
	} while (Number <= 0);
	return Number;
}

int RandomNumber(int From ,int To) {
	 int randVar =  rand() % (To - From + 1) + From;
	 return randVar;
}
 
char GetRandomCharacter(enRandom CharType) {
	switch (CharType) {
	case enRandom::smallLetter:
		return char(RandomNumber(97, 122));
	case enRandom::capitalLetter:
		return char(RandomNumber(65, 90));
	case enRandom::specialChar:
		return char(RandomNumber(33, 47));
	case enRandom::digit:
		return char(RandomNumber(48, 57));
	}
}
string generateWord(enRandom CharType, int Length) {
	string Word = " ";
	
		for(int i=1;i<=Length;i++){
		Word = Word + GetRandomCharacter(CharType);
		}
	
	return  Word;
}

string GenerateKey() {
	string Key = "";
	
	Key = generateWord(enRandom::capitalLetter,4) + "-";
	Key = Key + generateWord(enRandom::capitalLetter,4) + "-";
	Key = Key + generateWord(enRandom::capitalLetter,4) + "-";
	Key = Key + generateWord(enRandom::capitalLetter,4) ;

	return Key;
}

void FillArrayWithKeys(string arr[100], int arrLength) {
	for (int i = 0; i <= arrLength;i++) {
		arr[i] = GenerateKey();
	}
}
void printArrayOfKeys(string arr[100],int arrLength) {
	cout << "Array Elements : \n\n" ;

	for (int i = 0; i <= arrLength; i++)
		cout << "array [" << i << "] : " << arr[i] << "\n";
}
int main()
{
	srand((unsigned)time(NULL));
	string arr[100];
	int arrLength = ReadPositiveNumber();
	FillArrayWithKeys(arr,arrLength);
	printArrayOfKeys(arr,arrLength);
}

