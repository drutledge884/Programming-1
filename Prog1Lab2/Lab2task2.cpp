// use this file for the 'Interest Earned' problem
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    double principal, interest, ratepercent, amount;
    int times;
    float rate;
    cout << "Hello there!" << endl;
    cout << "Enter the Principal. " << endl;
    cin >> principal;
    cout << "Enter the interest rate (in percent). \n" ;
    cin >> rate;
    cout << "How many times is the interest compounded annually? \n" ;
    cin >> times;
    ratepercent = (rate / 100);
    interest = principal * ratepercent;
    amount = principal * pow((1 + (ratepercent / times)), times);
    cout << "Interest Rate: " << setw(8) << fixed << showpoint << setprecision(2) << rate << "% \n";
    cout << "Times Compounded: " << setw(8) << setprecision(0) << times << " \n";
    cout << "Principal: $" << setw(8) << fixed << showpoint << setprecision(2) << principal << " \n";
    cout << "Interest: $" << setw(8) << fixed << showpoint << setprecision(2) << interest << " \n";
    cout << "The amount is $" << setw(8) << fixed << showpoint << setprecision(2) << amount << " \n";
    return 0;
}