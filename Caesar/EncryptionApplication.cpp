#include <iostream>
#include <string.h>
using namespace std;

struct encryption{
    char enc[200];
    char plaintext[200];
    char ciphertext[200];
    int key;
};

int main()
{
    struct encryption e;

    char username[20], password[20], uname[10] = "p1", pass[20] = "p2", choice;
    int op;
    cout << "\n Security of your information matters\n";
    cout << "------------------------------------------\n";
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    if (strcmp(username, uname) == 0 && strcmp(password, pass) == 0)
    {
        cout << "\n Welcome to encryption world \n";
        do
        {
            cout << "\n 1. Encryption \t 2.Decryption \t 3.Exit\n";
            cout << "Enter your option: ";
            cin >> op;
            switch (op)
            {
            case 1:
                cout << "Enter the encryption key: ";
                cin >> e.key;
                fflush(stdin);
                cout << "Enter the plaintext: ";
                cin.get(e.plaintext, 200);
                //cin >> e.plaintext;
                cout << "The chipertext is: \n";
                for(int i = 0; i < strlen(e.plaintext); i++)
                {
                    e.enc[i] = (int)e.plaintext[i] + e.key;
                    cout << e.enc[i];
                }
                break;

            case 2:
                cout << "Enter the decryption key: ";
                cin >> e.key;
                fflush(stdin);
                cout << "Enter the ciphertext: ";
                cin.get(e.ciphertext, 200);
                //cin >> e.plaintext;
                cout << "The plaintext is: \n";
                for(int i = 0; i < strlen(e.ciphertext); i++)
                {
                    e.plaintext[i] = (int)e.ciphertext[i] - e.key;
                    cout << e.plaintext[i];
                }
                break;

            case 3:
                exit(0);

            default:
                cout << "Enter a correct input/wrong input";
            }
            cout << "\nWould like to continue? Enter y/Y for yes any for close ";
            cin >> choice;
        } while (choice == 'y' || choice == 'Y');
    }
    else
    {
        cout << "\nTry again later, username or password is incorrect!!!";
    }
}