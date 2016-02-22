#include <iostream>
using namespace std;

int main ()
{
	int number;
	int sum=0;
	int numberitems;

	cout << "Enter number: ";
	cin >> numberitems;

	for(int i=0;i<numberitems;i++)
	{
		cout << "Enter number: ";
		cin >> number;
	
		sum=sum+number;

	}

	cout << "The sum of three numbers is: " << sum << endl;
	
	return 0;

}
