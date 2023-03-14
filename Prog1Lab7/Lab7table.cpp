#include <iostream>
#include <iomanip>
using namespace std;

// prototype goes here
void multiplyTable(int num);

int main()
{
	//code to call/test your function goes here
	int num;
	cout << "Enter a number.\n";
	cin >> num;
	multiplyTable(num);
	return 0;
}

// function definition goes here
void multiplyTable(int num)
{
	int count, count2;
	for (count = 1; count <= num; count++)
	{
		for (count2 = 1; count2 <= num; count2++)
		{
			cout << setw(5) << count * count2;
		}
		cout << endl;
	}
}