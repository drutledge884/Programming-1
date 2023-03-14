#include <iostream>
using namespace std;


int main()
{
	int totalCalories, fatGrams, caloriesFromFat, percentFromFat;

	cout << "How many calories are in the food? \n";
	cin >> totalCalories;
	cout << "How many grams of fat are in the food? \n";
	cin >> fatGrams;
	caloriesFromFat = fatGrams * 9;
	if (caloriesFromFat >= totalCalories)
		cout << "Impossible! \n";
	else
		percentFromFat = 100 * (caloriesFromFat / static_cast< float >(totalCalories));
if (percentFromFat <= 30)
	cout << "The percent of calories from fat is " << percentFromFat << "% and is low fat. \n";
else
	cout << "The percent of calories from fat is " << percentFromFat << "%. \n";

return 0;
}