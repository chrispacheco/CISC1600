// Assignment 3
#include <iostream>
#include <string>
using namespace std;

int main ()
{

	string name;	
	cout << "What's your name?";
	cin >> name;

	int a, b, c;
	
	cout << "Enter two numbers to add\n";
	cin >> a >> b;
	
	c = a + b;
	cout << "Sum of the entered numbers = " << c << endl;
	
	int x, y, z;
	
	cout << "Enter two numbers to subtract\n";
	cin >> x >> y;

	z = x - y;
	cout << "Difference of the entered numbers = " << z  << endl;
	
	cout << "Hi, " << name << ".";
	cout << " I've calculated that " << a << "+" << b << "=" << c << ", " << "and " << x << "-" << y << "=" << z << endl;
	return 0;

}
