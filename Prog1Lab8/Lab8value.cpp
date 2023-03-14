#include <iostream>
#include <fstream>
using namespace std;

void getInPatientData(int &, float &, float &, float &);
void getOutPatientData(float &, float &);
float getTotal(int, float, float, float);
float getTotal(float, float);

int main()
{
	int days, choice;
	float rate, medication, services, total;
	fstream file; // Creates the file object
	file.open("charges.txt"); // Opens the charges file
	
	cout << "Is the patient an in-patient (enter 1) or an out-patient (enter 2)?\n";
	cin >> choice;
	if (choice == 1) 
	{
		// patient is an in-patient.
		getInPatientData(days, rate, medication, services); // Gets the initial numbers
		total = getTotal(days, rate, medication, services); // Computes the total from the initial numbers
		file << "Medications: $" << medication << endl;
		file << "Services:    $" << services << endl;
		file << "Daily:       $" << (rate * days) << endl;
		file << "Total:       $" << total << endl;
	}
	if(choice == 2) 
	{
		// patient is an out-patient.
		getOutPatientData(services, medication); // Getes the initial numbers
		total = getTotal(services, medication); // Computes the total from the initial numbers
		file << "Medications: $" << medication << endl;
		file << "Services:    $" << services << endl;
		file << "Total:       $" << total << endl;
	}
	
	return 0;
}
	
// Takes the data to be used in the getTotal function
void getInPatientData(int &days, float &rate, float &medication, float &services)
{
	cout << "How many days was the patient in the hospital? \n";
	cin >> days;
	cout << "What is the daily rate? \n";
	cin >> rate;
	cout << "Enter the hospital medication charges. \n";
	cin >> medication;
	cout << "Enter the charges for hospital services. \n";
	cin >> services;
	// no return statement because the values are passed by reference
}

// Takes the data to be used in the getTotal function
void getOutPatientData(float &services, float &medication)
{
	cout << "Enter the charges for hospital services. \n";
	cin >> services;
	cout << "Enter the charges for medication. \n";
	cin >> medication;
}	// no return statement because the values are passed by reference


// Computes the total charges
float getTotal(int days, float rate, float medication, float services)
{
	float total = (days * rate) + medication + services;
	return total;
}

// Computes the total charges
float getTotal(float medication, float services)
{
	float total = services + medication;
	return total;
}