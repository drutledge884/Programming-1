#include <iostream>
#include <iomanip>
using namespace std;

// prototype of calcPower function goes here
int calcPower(int base, int exp);


int main()
{
	int base, exp, result;

	// test with values entered by the user
	cout << "Enter the base: ";
	cin >> base;
	cout << "Enter the exponent: ";
	cin >> exp;
	result = calcPower(base, exp);
	cout << result << endl;

	// display powers of 2 up to 2^10
	cout << endl << "Powers of 2 from 2^0...2^10: " << endl;
	int i;
	i = 0;
	while (i <= 10)
	{
		cout << calcPower(2, i) << endl;
		i++;
	
	}
	
	return 0;
}

// definition of calcPower function goes here
int calcPower(int base, int exp)
{
	int count, result;
	result = 1;
	for (count = 1; count <= exp; count++)
	{
		result = result * base;
	}
	return result;
}