#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int numMonths = 12;
	int mostRain, leastRain, mostCount, leastCount, count, total;
	double rainfall[numMonths], average;
	string monthName[numMonths];
	total = 0;
	mostRain = 0;
	leastRain = 1000;
	monthName[0] = "January";
	monthName[1] = "February";
	monthName[2] = "March";
	monthName[3] = "April";
	monthName[4] = "May";
	monthName[5] = "June";
	monthName[6] = "July";
	monthName[7] = "August";
	monthName[8] = "September";
	monthName[9] = "October";
	monthName[10] = "November";
	monthName[11] = "December";
	
	for (count = 0; count <= 11; count++)
	{
		cout << "Enter the total rainfall in " << monthName[count] << ". \n";
		cin >> rainfall[count];
		total = total + rainfall[count];
		mostRain = 0;
		leastRain = 500;

		if (rainfall[count] > mostRain) 
		{
			mostRain = rainfall[count];
			mostCount = count;
		}
	if (rainfall[count] < leastRain) 
	{
		leastRain = rainfall[count];
		leastCount = count;
	}
}

	average = total / numMonths;

	cout << "\n The total rainfall for the year was " << total << " inches. The average monthly rainfall was " << average << " inches.\n";
	cout << monthName[mostCount] << " had the most rain with " << rainfall[mostCount] << " inches. " << monthName[leastCount] << " had the least rain with " << rainfall[leastCount] << " inches. \n";

	return 0;
}