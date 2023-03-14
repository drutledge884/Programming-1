#include <iostream>
using namespace std;

float average(int *scores, int scoreNum);

int main()
{
	float avg;
	int testNum = 1;
	int score;
	int *scores;
	int scoreNum;

	cout << "Please enter in how many scores you will have: \n";
	cin >> scoreNum;
	scores = new int[scoreNum];

	for (int count = 0; count < scoreNum; count++)
	{
		cout << "Enter the score for test number " << testNum << " / " << ": \n";
		testNum++;
			cin >> scores[count];
	}
	avg = average(scores, scoreNum);
	cout << "The average test score is " << avg << "\n";
	return 0;
}

float average(int *scores, int scoreNum)
{
	float avg;
	int total = 0;
	for (int count = 0; count < scoreNum; count++)
	{
		total += scores[count];
		avg = static_cast<float>(total) / scoreNum;
	}
	return avg;
}