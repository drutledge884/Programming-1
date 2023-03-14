#include <iostream>
using namespace std;

int main()
{
	double pressA, pressB, pressC, Avg;
	
	cout << "What is pressure A? \n";
	cin >> pressA;
	if (pressA < 0 || pressA > 100)
		cout << "You done messed up. \n";
	else
	cout << "What is pressure B? \n";
	cin >> pressB;
	if (pressB < 0 || pressB > 100)
		cout << "You done messed up. \n";
	else
	cout << "What is pressure C? \n";
	cin >> pressC;
	if (pressC < 0 || pressC > 100)
		cout << "You done messed up. \n";
	else
	Avg = ((pressA + pressB + pressC) / 3);
		if (Avg > 0 && Avg < 40)
			cout << "Pressure is low. \n";
		else if (Avg > 39 && Avg < 71)
			cout << "Pressure is normal. \n";
		else if (Avg > 70 && Avg < 100)
			cout << "Pressure is high. \n";

	return 0;
}