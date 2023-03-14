#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct player
{
	string name;
	int number; 
	int points;
};

int main()
{
	ifstream inputFile;
	inputFile.open("team_jedi_council.txt");
	return 0;
}