#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
const int MINVALUE = 1, MAXVALUE = 50, LOWNUM = 6;
int num, guess, attemptNumber;
unsigned seed = time(0);
srand(seed);
num = (rand() % (MAXVALUE - MINVALUE + 1)) + MINVALUE;
attemptNumber = 0;

cout << "Try to guess the number between 1 and 50. \n";
cout << num << "\n";
cout << "Enter your guess. \n";
cin >> guess;

if (guess == num)
{
	cout << "Correct. \n";
	attemptNumber++;
}
else
{
	while (guess != num)
	{
		if (guess <= num)
		{
			cout << "Too low, try again. \n";
			attemptNumber++;
			cin >> guess;
		}
		else if (guess >= num)
		{
			cout << "Too high, try again. \n";
			attemptNumber++;
			cin >> guess;
		}
	}
}
cout << "Correct. \n";
attemptNumber++;
cout << "Attempts: " << attemptNumber << "\n";
if (attemptNumber <= 6)
cout << "Are you psychic?\n";
else
cout << "Clearly not psychic. \n";


	return 0;
}