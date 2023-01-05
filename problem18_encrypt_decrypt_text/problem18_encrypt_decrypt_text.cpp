
#include <iostream>
#include <string>

using namespace std;
string ReadText(string message) {
	string Text="";
	cout << message;
	getline(cin,Text)  ;
	return Text;
}
string EncryptionText(string Text , short encryptionKey) {
	for (int i = 0; i <= Text.length(); i++) {
		Text[i] = char((int)Text[i] + encryptionKey);
	}
	return Text;
}
string DecryptionText(string Text, short encryptionKey) {
	for (int i = 0; i <= Text.length(); i++) {
		Text[i] = char((int)Text[i] - encryptionKey);
	 }
	return Text;
}
int main()
{
	const short encryptionKey = 2;
	string Text = ReadText("enter text : \n");
	string TextAferEncryption, TextAfterDecryption;
	TextAferEncryption = EncryptionText(Text, encryptionKey);
	TextAfterDecryption = DecryptionText(TextAferEncryption, encryptionKey);

	cout << "the text befor encryption : " << Text << endl;
	cout << "text after encryption :  "  <<TextAferEncryption << endl;
	cout << "the text after Decryption : " << TextAfterDecryption << endl;

	
}

