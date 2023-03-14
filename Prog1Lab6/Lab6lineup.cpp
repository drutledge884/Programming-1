#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream file;
	file.open("Text.txt");
	string name, front, back;
	file >> name;
	front = name; 
	back = name;

while (file >> name)
{
	if (name < front)
		front = name;
	if (name > back)
		back = name;
}
	cout << front << " is at the front of the line. \n";
	cout << back << " is at the back of the line. \n";

	return 0;
}