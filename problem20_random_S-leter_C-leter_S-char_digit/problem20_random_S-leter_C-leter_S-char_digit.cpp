
//  

#include <iostream>
#include <cstdLib>

using namespace std;

enum enRandom { Small = 1, Capital = 2, SpecialC = 3, Digit = 4 };


char RandomNumber(char From, char To) {
	//Function to generate a random number
	int Rndm = rand() % (To - From + 1) + From;
	return char(Rndm);
}

char GetRandomNumber(enRandom CharType) {
	switch (CharType) {
	case enRandom::Small:
		return char(RandomNumber(97, 122));
		break;
	case enRandom::Capital:
		return char(RandomNumber(65, 90));
		break;
	case enRandom::SpecialC:
		return char(RandomNumber(32, 47));
		break;
	case enRandom::Digit:
		return char(RandomNumber(48, 57));
		break;
	}

}



int main()
{
	//Seeds the random number generator in C++, called only onc
	srand((unsigned)time(NULL));

	cout << GetRandomNumber(enRandom::Small) << endl;
	cout << GetRandomNumber(enRandom::Capital) << endl;
	cout << GetRandomNumber(enRandom::SpecialC) << endl;
	cout << GetRandomNumber(enRandom::Digit) << endl;

}

