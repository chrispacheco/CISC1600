// Assignment #2
#include <iostream>
#include <string>
using namespace std;

int main()
{

	string username;
	cout << "What's your name?  ";
	cin >> username;

	string age;
	cout << "What's your age? ";
	cin >> age; 

	string stuff;
	cout << "What's your favorite thing?  ";
	cin >> stuff;

	cout << "Hi, " << username << ". " <<  endl;
	cout << "I know you are " << age << " years old and like " << stuff << ". " <<  endl;
	return 0;
}

