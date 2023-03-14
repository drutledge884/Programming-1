#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    float C, F;
    cout << "What is the celsius temperature? " ;
    cin >> C;
    F = ((9.0 / 5.0) * C) + 32;
    cout << "Fahrenheit temperature: " << F << "\n";
    return 0;
}