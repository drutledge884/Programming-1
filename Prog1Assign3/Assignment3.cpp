//====================================================
// Daniel Rutledge
// Due: 10/11/17
// Programming Assignment 3
// Description: Math Drill
//====================================================

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

int randomgen(int max_value);

int main()
{
	int numOne = 1, numTwo = 1, ans = 1, MINVALUE = 1, MAXVALUE = 10, seed = 10;

    cout << "This program will ask you basic arithmetic questions until you die or go insane.\n";
    cout << "If you get the question right, you will be asked a new question. If not, you will repeat the problem.\n";
    cout << "When you are done, enter -1 to terminate the program. \n";

    while (ans != -1)
    {
        if(ans != numOne + numTwo) // If the given answer is incorrect...
        {
            cout << numOne << " + " << numTwo << " = ";
            cin >> ans;
        	cout << "\n";
        }
        else if(ans == numOne + numTwo) // If the given answer is correct...
        {
            numOne = randomgen(MAXVALUE);
            numTwo = randomgen(MAXVALUE);
            cout << numOne << " + " << numTwo << " = ";
            cin >> ans;
        	cout << "\n";
        }
    }
}

int randomgen(int max_value)
{
    rand();
    int random;
    random = rand()/ (RAND_MAX / max_value + 1);
    return random;
}