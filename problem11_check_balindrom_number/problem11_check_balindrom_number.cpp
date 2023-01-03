#include <iostream>
using namespace std;
int ReadPositiveNumber(string message) {
	int Number=0;
	do {
		cout << message << endl;
		cin >> Number;
	}
	while (Number <= 0);
	return Number;
}

int ReversedNumber(int Number) {
	int Remainder = 0,Reverse=0;
	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		Reverse = Reverse * 10 + Remainder;
	}
	return Reverse;
}

bool CheckPalindrome(int Number) {
	return ReversedNumber(Number) == Number;
}

int main()
{
	int Number = ReadPositiveNumber("please enter the Number : ");
	
	if (CheckPalindrome(Number)) {
		cout << " the number " << Number << " is a Palindrome  .";
	}
	else {
		cout << " the number " << Number << " is Not a Palindrome  .";
	}
	return 0;
}