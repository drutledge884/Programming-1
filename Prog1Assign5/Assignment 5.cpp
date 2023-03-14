//====================================================
// Daniel Rutledge
// Due: 11/13/17
// Programming Assignment 5
// Description: Math Drill 2
//====================================================

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

void rightFeedback(void);
void wrongFeedback(void);
int askQuestion(bool, int&, int&, int&);
int getRandom(int, int);

int main()
{
	unsigned seed = time(0);
	srand(seed);
	bool isCorrect = true;
	int ans, max, min, questionCount, questionType, num1, num2, userAns, correctAns, terminate;
	double correctCount, percentRight;
	min = 1;
	max = 4;
	correctCount = 0;
	questionCount = 0;
	
	cout << "This program will ask you basic arithmetic questions until you die or go insane (or enter -1).\n";
	cout << "If you get the question right, you will be asked a new question. If not, you will repeat the problem.\n\n";
	
	correctAns = askQuestion(true, questionType, num1, num2);  
	cin >> userAns;
	
	while (userAns != -1) 
	{
		questionCount++; 
		if (userAns == correctAns) 
		{ 
			correctCount++;       
			rightFeedback();         
			isCorrect = true; 
		}
		else 
		{ 
			isCorrect = false;   
			wrongFeedback();
		}

	correctAns = askQuestion(isCorrect, questionType, num1, num2);      
	cin >> userAns;
	}

	// Score report
	cout << "You attempted: " << questionCount << " questions.\n"; 
	percentRight = 100 * (correctCount / questionCount);
	cout << "Your score: " << percentRight << "%\n";
	cout << "Enter any value to continue.";

	// The only function of "terminate" is to fix a bug where the program randomly closes after execution.
	cin >> terminate;
	if(terminate != 420)

	return 0;
}

// If you get it right, the program is nice to you.
void rightFeedback() 
{
	int oneliner;
	const int min = 1, max = 4;
	oneliner = getRandom(min, max);
	if(oneliner == 1)
	{
		cout << "Wow! Look at the big brain on Brian!\n";
	}
	else if (oneliner == 2)
	{
		cout << "The force is strong with you.\n";
	}
	else if (oneliner == 3) 
	{
		cout << "Ay, that's pretty good!\n";
	}
	else if (oneliner == 4) 
	{
		cout << "You have done well, my apprentice.\n";
	}
}

// If you get it wrong, I roast you.
void wrongFeedback() 
{
	int oneliner;
	const int min = 1, max = 4;
	oneliner = getRandom(min, max);
	if (oneliner == 1)
	{
		cout << "You're as bright as a black hole, and twice as dense. \n";
	}
	else if (oneliner == 2)
	{
		cout << "You are living proof that evolution CAN go in reverse.\n";
	}
	else if (oneliner == 3)
	{
		cout << "YOU ARE THE REASON THE GENE POOL NEEDS A LIFEGUARD.\n";
	}
	else if (oneliner == 4)
	{
		cout << "Some drink from the fountain of knowledge; clearly, you only gargled.\n";
	}
}

// Randomizes a number for the math question
int getRandom(int min, int max) 
{
	
	int num;
	num = (rand() % (max - min + 1)) + min;
	return num;
}

// Asks the user a math question
int askQuestion(bool isCorrect, int& questionType, int& num1, int& num2) 
{
	int min, max, rightAns;
	if (isCorrect == true) 
	{
		questionType = getRandom(1, 2);
		if (questionType == 1) // If it's addition...
		{ 
			min = 1;
			max = 50;
			num1 = getRandom(min, max);
			num2 = getRandom(min, max);
			cout << num1 << " + " << num2 << " = ";
			rightAns = num1 + num2;
			return rightAns; // Returns the right answer.
		}
	
		if (questionType == 2)  // If it's multiplication...
		{
			min = 1;
			max = 10;
			num1 = getRandom(1, 10);
			num2 = getRandom(1, 10);
			cout << num1 << " * " << num2 << " = ";
			rightAns = num1 * num2;
			return rightAns; // Returs the right answer.
		}
	}
	if (isCorrect == false) 
	{
		if (questionType == 1)  // If it's addition...
		{
			cout << num1 << " + " << num2 << " = ";
			rightAns = num1 + num2;
			return rightAns; // Returs the right answer.
		}
		if (questionType == 2)  // If it's multiplication...
		{
			cout << num1 << " * " << num2 << " = ";
			rightAns = num1 * num2;
			return rightAns; // Returs the right answer.
		}
	}
    return 0;
}