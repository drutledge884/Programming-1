#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Prototypes for "sortArray" and "showArray"
void sortArray(string[], int);
void showArray(const string[], int);

int main()
{
    int count = 0;
    const int numNames = 8;
    string names[numNames];
    ifstream inputFile;

    inputFile.open("names.txt");
    while (count < numNames && inputFile >> names[count])
    	count++;
    inputFile.close();

    sortArray(names, numNames);
    showArray(names, numNames);

	return 0;
}

// Function definition for "sortArray"
void sortArray(string names[], int numNames)
{
	bool swap;
	string name;
	do
	{
		swap = false;
		for(int count = 0; count < (numNames - 1); count++)
		{
			if (names[count] > names[count + 1])
			{
				name = names[count];
				names[count] = names[count + 1];
				names[count + 1] = name;
				swap = true;
			}
		}
	} while (swap);
}

// Function definition for "showArray"
void showArray(const string names[], int numNames)
{
	for (int count = 0; count < numNames; count++) 
	{
		cout << names[count] << " ";
	}		
	cout << endl;
}