//======================================================
// Daniel Rutledge
// 11/1/17
// Assignment 4
// Program Description: Days Out
//======================================================

#include <iostream>
using namespace std;

int headcount(); // This is the prototype for the first function.
int absences(int); // This is the prototype for the second function.
double average(int numEmployees, int daysMissed); // This is the prototype for the third function.

int main()
{
    int numEmployees, daysMissed; // numEmployees and daysMissed are the output of the first two functions.
    double averageSkips; // averageSkips holds the number calculated by the average function.
    numEmployees = headcount(); // numEmployees gets the value returned by the headcount function.
    daysMissed = absences(numEmployees); // daysMissed gets the total number of skip days returned by the absences function.
    averageSkips = average(numEmployees, daysMissed); // averageSkips gets the final answer returned by the averaging function.
    cout << "The average number of skips per employee is " << averageSkips << " skips. \n"; // Prints the value of averageSkips.
    int terminate;
    cin >> terminate;
    // Terminate is not part of the requirements.
    // The program kept closing immediately after execution and a cin statement was the only way I could get it to stop.
    return 0;
}
// the headcount function prompts the user for the total number of employees. It returns that number as an int.
int headcount(void)
{
    int people; // people holds the total number of employees entered by the user.
    cout << "How many total employees are there? \n" ;
    cin >> people;
    return people; // this copies the value stored in people into the numEmployees value in main.
}

// the absences function prompts the user to enter the number of absences per employee. It totals these absences and returns the sum.
int absences(int numEmployees)
{
    int skips, count, total = 0; // skips holds the number of absences for the employee as entered by the user. count is used only in the for loop.
    for(count = 1; count <= numEmployees; count++) // All count does is control the for loop.
    {
        cout << "How many days has employee " << count << " missed? \n";
        cin >> skips;
        if (skips <= 0) // This just prevents unwanted gibberish input.
        {
            cout << "Invalid Input. \n";
        }
        else
            total = total + skips; // total is a running "total" of how many absences the employees have collectively had.
    }
return total; // Returns the sum of everybodys absences.
}

// The average function calculates the average number of absences per employee and returns it as a double.
double average(int numEmployees, int daysMissed) // The arguments of this function are the values we got from the previous two functions.
{
    double avg; // only one variable necessary to hold the value of the average. The other numbers are passed to the function.
    avg = static_cast<double>(daysMissed)/numEmployees; // This line is the equation to find the average number of skips.
    // static cast converts daysMissed from an int into a double.
    return avg; // returns the average number of skips. avg gets copied into the averageSkips variable in main.
}