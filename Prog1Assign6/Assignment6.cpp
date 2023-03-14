#include <iostream>
#include <iomanip> 
#include <fstream>
#include <string>
using namespace std;

int main()
{
int size = 20;
int count = 0, terminate = -420;
char correctAnswers[size];
ifstream inputFile;

// Convert "correctAnswers.txt" to a char array.
inputFile.open("correctAnswers.txt");
if(!inputFile)
    cout << "Input File Error\n";
while (!inputFile.eof())
{
    inputFile >> correctAnswers[count];
	count++;
}

cout << "The answers are: ";
for (int count2 = 0; count2 < size; count2++)
{
	cout << correctAnswers[count2] << " ";
}
cout << endl;
//cin >> terminate;
inputFile.close();

return 0;
}