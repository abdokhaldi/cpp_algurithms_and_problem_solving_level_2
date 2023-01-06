// problem21_generate_keys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum enRandom{SmallLetter=1,CapitalLetter=2,SpecialCharacter=3,Digit=4};

int RandomNumber(int From, int To) {
	int rndm = rand() % (To - From + 1) + From;
	return rndm;
}

int ReadPositiveNnumber(string message) {
	int Number = 0;
	do {
		cout << message;
		cin >> Number;
    } while (Number <=0);
	return Number;
}

char GetRandomCharacter(enRandom CharType) {
	switch (CharType) {
	case enRandom::SmallLetter:
		return char(RandomNumber(97, 122));
	case enRandom::CapitalLetter:
		return char(RandomNumber(65, 90));
		case enRandom::SpecialCharacter:
			return char(RandomNumber(33,47));
		case enRandom::Digit:
			return char(RandomNumber(48,57));
	}
}

string GenerateWord(enRandom CharType ,short Length) {
	string Word;
	for (int i = 1; i<=Length; i++) {
		Word = Word + GetRandomCharacter(CharType);
	}
	return Word;
}

string GenerateKey() {
  
	string Key = "";
        
	Key = GenerateWord(enRandom::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enRandom::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enRandom::CapitalLetter, 4) + "-";
	Key = Key + GenerateWord(enRandom::CapitalLetter, 4);

	return Key;
}

void GenerateKeys(short NumberOfKeys) {
	for (int i = 1; i <= NumberOfKeys; i++) {
		cout << "Key [" << i << "] : " << GenerateKey() << endl;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	
	 //cout << GetRandomCharacter(enRandom::CapitalLetter);
	 GenerateKeys(ReadPositiveNnumber("enter number of keys : ")); 
	//cout << RandomNumber(1, 10);
}

