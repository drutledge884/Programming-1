#include <iostream>
using namespace std;

int main()
{
	int valueNumber, value, total, average, divisor, minimumInitial, maximumInitial;
	
	valueNumber = 1;
	total = 0;
	cout << "Enter your list of values. When finished, enter -1. \n\n";
	cout << "Enter the value for #" << valueNumber << ": ";
	cin >> value;
	minimumInitial = value;
	maximumInitial = value;

	while (value >= 0)
	{
		total += value;
		value++;
		valueNumber++;
		cout << "Enter the value for #" << valueNumber << ": ";
		cin >> value;
		if (value >= maximumInitial)
		{
			maximumInitial = value;
		}
		else if (value <= minimumInitial && value >= 0)
		{
			minimumInitial = value;
		}
	}

	cout << "\nThe sum of all the values is " << total << "\n";
	divisor = valueNumber - 1;
	average = (total / divisor);
	cout << "The average of the values is: " << average << "\n";
	cout << "Minimum value is " << minimumInitial << endl;
	cout << "Maximum value is " << maximumInitial << endl;

	return 0;
}