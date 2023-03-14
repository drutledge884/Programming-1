//====================================================
// Daniel Rutledge
// Due 9/20/17
// Programming Assignment #1
// Description: Male and Female Percentages
//====================================================

#include <iostream>
using namespace std;

int main()
{
    int boys, girls, percentBoys, percentGirls; // "boys" and "girls" are input values while "percentBoys" and "percentGirls" are output values.
    double total; // In order for the calculations to work, "total" must be double so that it is compatible with the division statements.

    cout << "How many boys are there? \n";
    cin >> boys;
    cout << "And how many girls are there? \n";
    cin >> girls;

    total = boys + girls;
    percentBoys = (boys / total) * 100; // Percent Calculations
    percentGirls = (girls / total) * 100;

    cout << "Boys make up " << percentBoys << "% and girls make up " << percentGirls << "%. \n\n"; // Final Outcome

    return 0;
}