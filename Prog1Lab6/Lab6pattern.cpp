#include <iostream>
using namespace std;

int main()
{
	int size, row, column;

	cout << "Enter the desired size of the pattern. \n";
	cin >> size;
	cout << "Pattern A \n";
	for (column = 1; column <= size; column++)
	{
		for (row = 1; row <= column; row++)
			cout << "+";
	cout << endl;
	}
	cout << "Pattern B\n";
	for (row = size; row >= 1; row--)
	{
		for (column = row; column >= 1; column--)
		{
			cout << "+";
		}
		cout << endl;
	}
	return 0;
}