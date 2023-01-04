

// write a program to gess 3-letters password 

#include <iostream>
using namespace std;
string ReadPassword(string message) {
    string Password = "";
    cout << message;
    cin >> Password;

    return Password;
}

bool GessPassword(string OriginalPassword) {
    string Word = "";
    int counter = 0;
    for (int i = 65; i <= 90; i++) {

        for (int j = 65; j <= 90; j++) {

            for (int k = 65; k <= 90; k++) {
                counter++;
                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(k);

                cout << " \n trial[" << counter << "] : " << Word << endl;

                if (Word == OriginalPassword) {

                    cout << " \n \t Password is " << Word << endl <<
                        "\t  Found after " << counter << " trial(s) \n";
                    return true;
                }

                Word = "";
            }

        }

    }
    return false;
}

int main()
{
    GessPassword(ReadPassword("enter password : \n"));
}

