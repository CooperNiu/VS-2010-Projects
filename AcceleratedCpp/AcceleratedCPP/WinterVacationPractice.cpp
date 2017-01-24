#include<iostream>
#include <string>

using namespace std;

int main()
{
	int a=1, b=1;
	cout << "Hello, world!"<<endl;
	cout<<a+b<<endl;
	cout << "\t This \(\"\) is a quote, and this \(\\\) is a backlash."<<endl;
	/* 
	Hello, world!
	2
		This (") is a quote, and this (\) is a backlash.
	 */

	cout<<"Please input your first name:";
	string name;
	cin >> name;

	// build the message that we intend to write
	string greeting = "Hello, " + name + "!";

	// build the second and fourth lines of the output
	string spaces(greeting.size(), ' ');
	string second = "* " + spaces + " *";

	//build the first and fifth lines of the output
	const string first(second.size(), '*');

	//write it all
	cout << endl;
	cout << first << endl;
	cout << second << endl;
	cout << "* " << greeting << " *"<<endl;
	cout << second << endl;
	cout << first << endl;

	char c = '@';
	int n=10;
	string z(n, c); // initial z with n copies of c, n is the number of characters, c is the character;
	cout<< z;

	system("pause");
	return 0;
}