// problem_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printTableHeader() {
    cout << "\t\t\t\t multiplication 1 to 10 " << endl;
    cout << "\t";
    for (int i = 1; i <= 10; i++) {
        cout <<  i << "\t";
    }
    cout << "\n _________________________________________________________________________________________\n";
     }
string collumnSeparator(int i) {
    if(i<10) {
        return "   |"  ;
    }
    else {
        return "  |";
    }
}
void printMultiplicationTable() {
    printTableHeader();
  for (int i = 1; i <= 10; i++) {

      cout << "  " << i << collumnSeparator(i) << "\t";
      for (int j = 1; j <=10; j++) {
         cout  << i * j << "\t";
}
         
      cout << endl;
  }
   
}
int main()
{
    
    printMultiplicationTable();
}

