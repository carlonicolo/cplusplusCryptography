#include <iostream>
using namespace std;

int main()
{
    string plainText;
    string cipherText;
    string key;

    cout << "Enter a plaintext, please ";
    cin >> plainText;
    cout << "Enter a key, please ";
    cin >> key;

    string newKey = key;

    while(newKey.length() < plainText.length() )
    {
        newKey += key;
    }
    for(int i=0; i < plainText.length(); i++)
    {
        cipherText += (plainText[i] - newKey[i] + 26)%26 + 65;
    }
    cout << cipherText << endl;

}