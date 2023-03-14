#include <iostream>
using namespace std;
int main()
{
    float payAmount, annualPay;
    int payPeriods;
    // replace these assignment statements with prompt/input statements
    // to ask the user for these values.
    cout << "Enter the pay amount per period: " ;
    cin >> payAmount;
    cout << "Enter the number of annual pay periods: " ;
    cin >> payPeriods;
    annualPay = payAmount * payPeriods;
    cout << "Your annual pay is: " << annualPay << endl;
    return 0;
}