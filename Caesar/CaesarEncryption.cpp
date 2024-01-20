#include <iostream>
#include <string>
using namespace std;

struct encryption
{
	char enc[200]; // hhhhhhhhaseirkzsd
	char dec[200]; // hello there
	int key;
	char msg[200]; // hello there
};
int main()
{

	char username[20], password[20], uname[20]="p1", pass[20]="p2";
	cout << "\n Security of your information matters\n";
	cout << "------------------------------------------";
	cout << "Enter your username: ";
	cin >> username;
	cout << "Enter your password: ";
	cin >> password;

	if(strcmp(username, uname) == 0 && strcmp(password, pass) == 0 )
	{
		cout << "\n Welcome to encryption world!!! \n";
	} else {
		cout << "Try again later, username or password is incorrect!!!";
	}

	string username, password;
	string uname = "p1", pass = "p2";

	struct encryption e;
	char ch;
	int u, p, op, i;

	cout << "\n\t\t\t\t-------------------------------------------------------\n";
	cout << "\t\t\t\t+----------+ SECURITY OF YOUR DATA MATTERS +----------+\n";
	cout << "\t\t\t\t-------------------------------------------------------\n";
	cout << "\t\t\t\t+-------+ THANK YOU FOR USING OUR APPLICATION +-------+\n\n\n";

	cout << "\t PLEASE LOG IN TO USE FEATURES";
	cout << "\n---------------------------------------------\n";
	cout << "\tENTER USERNAME:";
	cin >> username;
	cout << "\tENTER PASSWORD:";
	cin >> password;
	cout << "\n---------------------------------------------\n";

	u = username.compare(uname);
	p = password.compare(pass);

	if (u == 0 && p == 0)
	{
		cout << "Welcome to encryption application\n";

		do
		{
			cout << "\n Please Enter your choice:";
			cout << "\n1.Encryption \t 2.Decryption \t 3.Exit\n";
			cin >> op;

			switch (op)
			{
			case 1:
				cout << "\nEnter the encryption key\n";
				cin >> e.key;
				fflush(stdin);
				cout << "Please enter your message:\n";
				cin.get(e.msg, 200);

				// hello there   key=2
				cout << "\nCiphertext is:\n";
				for (i = 0; i < strlen(e.msg); i++)
				{
					e.enc[i] = e.msg[i] + e.key;
					cout << e.enc[i];
				}
				break;

			case 2:
				cout << "\nEnter the key:";
				cin >> e.key;
				fflush(stdin);
				cout << "\nEnter the message:";
				cin.get(e.msg, 200);
				cout << "\nPlaintext is:\n";
				for (i = 0; i < strlen(e.msg); i++)
				{
					e.dec[i] = e.msg[i] - e.key;
					cout << e.dec[i];
				}
				break;

			case 3:
				exit(0);
				break;

			default:
				cout << "\nWrong input,try 1,2,3\n";
			}
			cout << "\nDo you want to continue press y/Y for yes any key to exit\n";
			cin >> ch;
		} while (ch == 'y' || ch == 'Y');
		cout << "\nSee you soon";
	}
	else
	{
		cout << "Your username or password is incorrect try again";
	}
}
