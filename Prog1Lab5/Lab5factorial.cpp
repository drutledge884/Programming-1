#include <iostream>
using namespace std;


int main()
{
int n, count, factorial = 1;
cout << "Enter an integer greater than 0. \n";
cin >> n;
for (count = n; (count > 0); count--)
{
	factorial = factorial * count;
}
cout << "factorial is " << factorial << "\n";
	return 0;
}