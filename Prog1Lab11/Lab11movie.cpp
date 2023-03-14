#include <iostream>
#include <string>
using namespace std;

struct movieData
{
	string title;
	string director;
	int released;
	int runTime;
};

void display(movieData);

int main()
{
	movieData firstMovie;
	movieData secondMovie;

	firstMovie.title = "Star War: Backstroke of the West   ";
	firstMovie.director = "George (the man, the meme, the legend) Lucas      ";
	firstMovie.released = 2005;
	firstMovie.runTime = 140;

	secondMovie.title = "The Dark Knight                   ";
	secondMovie.director = "Christopher Nolan                                ";
	secondMovie.released = 2008;
	secondMovie.runTime = 152;

	display(firstMovie);
	display(secondMovie);

	return 0;
}

void display(movieData temp)
{
	cout << temp.title << "\t";
	cout << temp.director << "\t";
	cout << temp.released << "\t";
	cout << temp.runTime << "\n";
}