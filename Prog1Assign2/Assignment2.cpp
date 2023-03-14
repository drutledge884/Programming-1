//====================================================
//Daniel Rutledge
//10/4/17
//Programming Assignment #2
//Description: Bank Charges
//====================================================

#include <iostream>
#include <iomanip> // Necessary for formatting the output.
using namespace std;

int main()
{
    int checksWritten;
    double initialBalance, initialFee, checkFee, totalFee, flatCharge = 10; // These need to be doubles to make the formatting easier
    const double FOURCENT = .04, SIXCENT = .06, EIGHTCENT = .08, TENCENT = .10, EXTRAFEE = 15;

    // Initial prompts for input.
    cout << "Enter the initial balance. \n";
    cin >> initialBalance;
    cout << "Enter the number of checks written. \n";
    cin >> checksWritten;
    if (checksWritten <= 0)
        cout << "You sit on a throne of LIES. \n"; // This weeds out bad answers and cuts off the program if the user messes up.
    cout << "\n";
    if (initialBalance <= 400) // This will be used in the output later.
        initialFee = flatCharge + EXTRAFEE;
    else
        initialFee = flatCharge;

// The following nested if/else statements will determine the check fee.
    if (checksWritten <= 20 && checksWritten >= 0)
        checkFee = checksWritten * TENCENT;
    else if (checksWritten >= 19 && checksWritten <= 40)
        checkFee = checksWritten * EIGHTCENT;
    else if (checksWritten >= 39 && checksWritten <= 60)
        checkFee = checksWritten * SIXCENT;
    else if (checksWritten >= 60)
        checkFee = checksWritten * FOURCENT;
    totalFee = checkFee + initialFee;

    // Final stage is the formatted output.
    cout << setprecision(2) << fixed;
    cout << "Initial Balance:     $" << setw(10) << initialBalance << "\n";
    cout << "Fees: \n";
    if (initialBalance <= 400) // Since the minimum balance fee is not always applied, it is in an if statement.
    { 
    	cout << "Minimum Balance Fee: $" << setw(10) << EXTRAFEE << "\n";
    }

    cout << "Monthly Fee:         $" << setw(10) << flatCharge << "\n";
    cout << "Check Fee:           $" << setw(10) << checkFee << "\n";
    cout << "                     ============  \n";
    cout << "totalFee:            $" << setw(10) << totalFee << "\n\n";
}