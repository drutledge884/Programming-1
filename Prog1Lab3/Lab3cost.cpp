#include <iostream>
using namespace std;

int main()
{
    int cost, changeDue, quarter, dime, nickel, penny;
    int quartersDue, dimesDue, nickelsDue, penniesDue;
    double tax, total;

    tax = .075;
    cout << "What is the cost of the item? \n";
    cin >> cost;
    total = cost + (tax * cost);
    total = static_cast<int>(total + .5);

    cout << "Your total is " << total << " cents. \n";
    changeDue = 100 - total;
    cout << "Change Due: " << changeDue << " cents. \n";

    quarter = 25;
    dime = 10;
    nickel = 5;
    penny = 1;

    quartersDue = changeDue / quarter;
    dimesDue = (changeDue - (quartersDue * quarter)) / dime;
    nickelsDue = (changeDue - ((quartersDue * quarter) + (dimesDue * dime))) / nickel;
    penniesDue = (changeDue - ((quartersDue * quarter) + (dimesDue * dime) + (nickelsDue * nickel))) / penny;

    cout << "Quarters Due: " << quartersDue << "\n";
    cout << "Dimes Due: " << dimesDue << "\n";
    cout << "Nickels Due: " << nickelsDue << "\n";
    cout << "Pennies Due: " << penniesDue << "\n";

    return 0;
}
