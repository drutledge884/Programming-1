#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// prototypes go here
int dispMenu( void );
int dispAiChoice( void );
int repeatTest(int user, int ai);

int main()
{
    const int rock = 1;
    const int paper = 2;
    const int scissors = 3;
    int user, ai, outcome;


    user = dispMenu();
    ai = dispAiChoice();
    outcome = repeatTest(user, ai);
    while (outcome == 1)
    {
        user = dispMenu();
        ai = dispAiChoice();
        outcome = repeatTest(user, ai);
    }
    return 0;
}

// function definitions go here
int dispMenu( void )
{
    int user;
    cout << "You must choose: \n";
    cout << "1. Rock \n";
    cout << "2. Paper \n";
    cout << "3. Scissors \n";
    cin >> user;
    if (user == 1)
    {
	    cout << "You chose rock. \n";
	    return user;
    }
    else if (user == 2)
    {
    	cout << "You chose paper. \n";
    	return user;
    }
    else
    {
	    cout << "You chose scissors. \n";
    	return user;
    }
}

int dispAiChoice(void)
{
    int ai;
    const int MAXVALUE = 3;
    const int MINVALUE = 1;
    unsigned seed = time(0);
    srand(seed);
    ai = (rand() % (MAXVALUE - MINVALUE + 1)) + MINVALUE;
	if (ai == 1)
	{
		cout << "AI has chosen rock.\n";
		return ai;
	}
	else if (ai == 2)
	{
		cout << "AI has chosen paper. \n";
		return ai;
	}
	else if(ai == 3)
	{
		cout << "AI has chosen scissors. \n";
		return ai;
	}
	else
		cout << "Invalid\n";
}

int repeatTest(int user, int ai)
{
    int outcome;
	if (user - ai == 1)
	{
		cout << "\nVictory! \n\n";
		outcome = 0;
		return outcome;
	}
	else if(user == 1 && ai == 3)
	{
		cout << "\nVictory! \n\n";
		outcome = 0;
		return outcome;
	}
	else if (user - ai != 1)
	{
		cout << "\nDefeat. \n\n";
		outcome = 0;
		return outcome;
	}
	else if (user == ai)
	{
		cout << "\nTie! \n Initiating Rematch \n\n";
		outcome = 1;
		return outcome;
    }
}