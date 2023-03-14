#include <iostream>
#include <math.h>
using namespace std;
double formula(int);

int main()
{
	int time;
	double dist;
	for (time = 1; time <= 10; time++)
	{
		dist = formula(time);
		cout << "Distance fallen in " << time << " seconds: " << dist << " meters. \n";
	}

	return 0;
}

double formula(int t)
{
	double d, g;
	g = 9.8;
	d = 0.5 * g * pow(t, 2);
	return d;
}