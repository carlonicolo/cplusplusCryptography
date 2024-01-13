#include <iostream>
using namespace std;

int main()
{
    char plaintext = 'K';
    char ciphertext;
    char key = 'B';
    ciphertext = (plaintext - key + 26)%26 + 65;
    cout << ciphertext;
}