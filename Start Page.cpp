#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char new_user[500];
	int user;

	cout << "Welcome to MaTadi Telecom Billing System" << endl;
	cout << "Press 1 for Existing User \n" << "Press 2 for New User" << endl;
	//cin >> user;
	//cout << "Press 2 for New User" << endl;
	cin >> user;

	if(user == 2)
	{
		cout << "This is a New User Section" << endl;

		ofstream N_user("NewUser.txt");

		if (N_user.is_open());
		{
			cout << "Enter your user name : " << endl;
			cin.getline(new_user, 250);
			N_user << new_user << endl;
			N_user.close();
		}
	}

	cout << "Welcome  " << new_user << endl;


	getchar();
}