

// Print  All words from AAA to ZZZ 

#include <iostream>
using namespace std;

bool printAllWordsFromAAA_to_ZZZ( ) {
    string Word = ""; 
    int counter = 0;
    for (int i = 65; i <= 90;i++) {
        
        for (int j = 65; j <= 90; j++) {

            for(int k = 65; k <= 90; k++){
                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(k);
               
                cout <<  Word << endl;
                     
              Word = "";
         }
           
       }
       
   }
    return false;
}

int main()
{
    printAllWordsFromAAA_to_ZZZ();
}

