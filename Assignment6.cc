#include <iostream>
#include <string>
using namespace std;

int add (int a, int b)
{
	return a+b;
}

int sub(int a, int b)
{
	return a-b;
}

int factor (int n)
{
	int ret = 1;
	while ( n > 1)
{
	ret = ret * n;
	n--;
}
	
	return ret;
	
}	

int main()
{
	int x = 0;
	int y = 0;
	int n = 0;
	int ret = 1;

	cout << "Please input value for x:";
	cin >> x;
	cout << "And input value for y:";
	cin >> y;
	cout << "Please input value for n:";
	cin >> n;

	int operation = 1;
	while (operation !=0)
{
		cout << "Choose one: " << endl;
		cout << "1) print x+y" << endl;
		cout << "2) print x-y" << endl;
		cout << "3) print *=n" << endl; 
		cout << "0) exit program" << endl;
		cout << " : ";
		cin >> operation;
		
		int output;
		if(operation == 1)

		{
			output = add(x,y);
		}
	
		else if (operation == 2)

		{
			output = sub(x,y);
		}
	
		else if (operation == 3)
		
		{
			output = factor(n);
		}

		else
		
		{
		
			break;

		}


		cout << output << endl;

}			


		return 0;
}



