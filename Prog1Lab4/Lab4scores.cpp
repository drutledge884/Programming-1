#include <iostream>
using namespace std;


int main()
{

	int score;		// numeric test score

	cout << "Enter your score: ";
	cin >> score;
	if (score > 100 || score < 0)
		cout << "you done screwed up \n";
	else if (score >= 90)
		cout << "You made an A \n" << endl;
	else if (score >= 80)
			cout << "You made a B \n";
		else if (score >= 70)
				cout << "You made a C \n";
			else if (score >= 60)
					cout << "You made a D \n";
				else
					cout << "you made an F because you are a failure. \n";

	return 0;
}