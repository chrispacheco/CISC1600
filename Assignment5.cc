#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main ()
{

	srand(time(0));
	int number;
	number = rand() % 10 + 1;
	int guess;
	
	do 
	{
		cout << "Guess the number: ";
		cin >> guess;

		if (guess < number)
			cout << "Oops, too low! Guess again." << endl;
	
		else if (guess > number)
			cout << "Oops, too high! Guess again." << endl;
		
		else
			cout << "Bingo! The number you guessed is correct." << endl;
	} while (guess != number);;

	return 0;
}
