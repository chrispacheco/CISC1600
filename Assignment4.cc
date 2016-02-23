#include <iostream>
using namespace std;

int main ()
{
	int sum = 0;

	int iter = 1;
	while ( iter <=3 )

	{
		int x = 0;
		cout << "Iteration # " << iter << endl;
		cout << "Input a number: ";

		cin >> x;
		sum +=x;
		iter++;

	}

		cout << "The sum of the numbers is: " << sum << endl;

	return 0;	

		

}
