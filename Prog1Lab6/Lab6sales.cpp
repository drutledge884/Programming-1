#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream file;
    file.open("Text.txt");
    string name;
    int num, graph;

    while (file >> name)
    {
    	file >> num;
	    cout << setw(6) << name << ": ";
	    graph = num / 10;
    
	    while (num >= graph)
	    {
	    	cout << "*";
	    	graph += 100;
	    }
        cout << endl;
    }
	return 0;
}