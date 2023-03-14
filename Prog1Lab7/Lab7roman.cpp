#include <iostream>
using namespace std;

// prototype goes here
int letterToInt(char letter);

int main()
{
	
	//code to call/test your function goes here
	int numVal;
	char romNum;
	cout << "Enter a Roman Numeral. \n";
	cin >> romNum;
	numVal = letterToInt(romNum);


	return 0;
}

// function definition goes here
int letterToInt(char romNum)
{
	int value;
	switch (romNum)
	{
	case 'I':
		value = 1;
		cout << "Hindu-Arabic Numeral Equivalent: " << value << " \n";
		break;
	case 'V': 
		value = 5;
		cout << "Hindu-Arabic Numeral Equivalent: " << value << " \n";
		break;
	case 'X':
		value = 10;
		cout << "Hindu-Arabic Numeral Equivalent: " << value << " \n";
		break;
	case 'L': 
		value = 50;
		cout << "Hindu-Arabic Numeral Equivalent: " << value << " \n";
		break;
	case 'C': 
		value = 100;
		cout << "Hindu-Arabic Numeral Equivalent: " << value << " \n";
		break;
	case 'M':
		value = 1000;
		cout << "Hindu-Arabic Numeral Equivalent: " << value << " \n";
		break;
	default: 
		value = -1;
		cout << value << endl;

		return value;
	}
}