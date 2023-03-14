#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int x1, x2, y1, y2;
float slope;

cout << "What is X1? \n";
cin >> x1;
cout << "What is X2? \n";
cin >> x2;
cout << "what is Y1? \n";
cin >> y1;
cout << "What is Y2? \n";
cin >> y2;


if (x1 == x2)
{
	cout << "Slope is vertical and is therefor undefined. Try a different value. \n";
}
else
{
	slope = ((y2 - y1) / (x2 - static_cast<float>(x1)));
	cout << "The slope of your line is: " << setprecision(3) << showpoint << slope << ". \n";
}
return 0;
}