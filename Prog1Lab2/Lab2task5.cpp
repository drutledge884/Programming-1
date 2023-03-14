#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    double volume, radius, height, area;
    cout << "This exquisitely constructed program will tell you the volume of\n";
    cout << "a cylender-shaped fuel tank. \n";
    cout << "How tall is the tank? ";
    cin >> height;
    cout << "What is the radius of said fuel tank? " ;
    cin >> radius;
    const double PI = 3.14159;
    area = PI * pow(radius, 2.0);
    volume = area * height;
    cout << volume;
    return 0;
}