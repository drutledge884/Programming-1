#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int firstYear = 1, lastYear = 25;
    const double rateOfIncrease = 1.5;
    int yearNumber;
    double accRise;

    yearNumber = firstYear;

    for (yearNumber = firstYear; yearNumber <= lastYear; yearNumber++)
    {
    	accRise = rateOfIncrease * yearNumber;
    	cout << "Year " << setw(4) << yearNumber << ":" << "                " << "Level:" << accRise << "mm \n"; 
    }
	
    return 0;
}