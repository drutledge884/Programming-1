#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name, city, college, profession, animal, petname;
    int age;
    cout << "He who would cross the bridge of death must answer me these questions three, ere the other side he see. \n" ;
    cout << "What is your name? ";
    getline(cin, name);
    cout << "What is your age? ";
    cin >> age;
    cin.ignore();
    cout << "What is your city? ";
    getline(cin, city);
    cout << "What is your favorite college or university? " ;
    getline(cin, college);
    cout << "What is your profession? ";
    getline(cin, profession);
    cout << "What is your favorite animal? ";
    getline(cin, animal);
    cout << "What is your pets name? ";
    getline(cin, petname);
    cout << "There once was a person named " << name << " who lived in " << city << ". \n";
    cout << "At the age of " << age << ", " << name << " went to college at " <<
    college << ". \n";
    cout << "" << name << " graduated and went to work as a " << profession << ".\n";
    cout << "Then, " << name << " adopted a(n) " <<animal << " named " << petname << ". \n";
    cout << "They both lived happily ever after! \n" ;
    return 0;
}