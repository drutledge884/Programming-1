#include <iostream>
using namespace std;
//Function prototypes.
void calcWages(long int [], int [], double [], double []);
void dispWages(long int [], double []);

int main()
{
	const int numEmp = 7;
	long int empId[numEmp];
	int hours[numEmp];
	double payRate[numEmp], wages[numEmp];
	//ID initialization.
	empId[0] = 5658845;
	empId[1] = 4520125;
	empId[2] = 7895122;
	empId[3] = 8777541;
	empId[4] = 8451277;
	empId[5] = 1302850;
	empId[6] = 7580489;
	//hours initialization.
	hours[0] = 30;
	hours[1] = 33;
	hours[2] = 26;
	hours[3] = 29;
	hours[4] = 24;
	hours[5] = 32;
	hours[6] = 31;
	//pay rate initialization.
	payRate[0] = 10.00;
	payRate[1] = 10.00;
	payRate[2] = 10.00;
	payRate[3] = 10.00;
	payRate[4] = 10.00;
	payRate[5] = 10.00;
	payRate[6] = 10.00;
	void calcWages(long int empId[], int hours[], double payRate[], double wages[]);
	void dispWages(int empId[], double wages[]);

	return 0;
}

//Definition for calcWages function.
void calcWages(long int empId[], int hours[], double payRate[], double wages[]) 
{
	for (int count = 0; count < 7; count++)
	{
		wages[count] = payRate[count] * static_cast<double>(hours[count]);
	}
}
//Definition for dispWages function.
void dispWages(long int empId[], double wages[]) 
{
	cout << "Employee ID          Wages \n";
	cout << "-----------------------------\n";
	for (int count = 0; count < 7; count++) 
	{
		cout << empId[count] << ".........." << wages[count] << endl;
	}
}