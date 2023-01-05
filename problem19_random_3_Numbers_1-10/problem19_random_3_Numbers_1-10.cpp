


#include <iostream>
#include <cstdLib>
using namespace std;

int RandomNumber(int From , int To) {
	//Function to generate a random number

	int Rndm = rand() % (To - From + 1) + From;
	return Rndm ;
}

int main()
{
	   //Seeds the random number generator in C++, called only onc
	srand((unsigned) time(NULL)); 

	cout << RandomNumber(1,10) << endl;
	cout << RandomNumber(1, 10) << endl;
	cout << RandomNumber(1, 10) << endl;

   
   
}

