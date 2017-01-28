#include<iostream>
#include <string>
#include <iomanip>
#include <ios>

using namespace std;

int main()
{
    //ask for and read the student's name
    cout<<"Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin>>midterm>>final;

    //ask for the homework grades
    cout<<"Enter all your homework grades,"
        "followed by end-of-file: ";

    //the number and sum of grades read so far
    int count = 0;
    double sum = 0;

    //a viriable into which to read
    double x;

    //invariant
    //we have read count grades so far, and
    //sum is the sum of the first count grades
    while(cin>>x)
    {
        ++count;
        sum+=x;
    }

    // write the result
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
    <<0.2*midterm + 0.4 * final + 0.4 * sum / count
    << setprecision(prec) << endl;

	system("pause");
	return 0;
}

//int a=1, b=1;
//cout << "Hello, world!"<<endl;
//cout<<a+b<<endl;
//cout << "\t This \(\"\) is a quote, and this \(\\\) is a backlash."<<endl;
///*
//Hello, world!
//2
//    This (") is a quote, and this (\) is a backlash.
// */
//
//cout<<"Please input your first name:";
//string name;
//cin >> name;
//
//// build the message that we intend to write
//string greeting = "Hello, " + name + "!";
//
//// build the second and fourth lines of the output
//string spaces(greeting.size(), ' ');
//string second = "* " + spaces + " *";
//
////build the first and fifth lines of the output
//const string first(second.size(), '*');
//
////write it all
//cout << endl;
//cout << first << endl;
//cout << second << endl;
//cout << "* " << greeting << " *"<<endl;
//cout << second << endl;
//cout << first << endl;
//
//// use some functions
//char c = '@';
//int n=10;
//string z(n, c); // initial z with n copies of c, n is the number of characters, c is the character;
//cout<< z << endl;
