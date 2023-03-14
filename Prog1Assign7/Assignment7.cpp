//==================================================== 
// Daniel Rutledge 
// Due: 12/8/17 
// Programming Assignment 7
// Description: Address Book Application
//====================================================

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

struct person
{
	string firstName; // holds the first name
	string lastName; // holds the last name
	string phone; // holds the phone number
	string email; // holds the email
};

// Function Prototypes.
string dispMenu(void);
void addPerson(person[], int&);
bool validatePhone(person[], int, int);
void deletePerson(person[], int&);
int findAndDisplayPerson(person[], int, string);
void listAllPeople(person[], int);
void saveList(person[], int);
void sortPeople(person[], int);

int main()
{
// Initializations.
const int capacity = 100; // array capacity
struct person data[capacity]; // array of people
string choice; // user selection from the menu
int totalNum = 0; // number of people in the array
string find; // used in the find function


	
// Data transfer from the file to the array.
ifstream inputFile;
inputFile.open("book.txt");
if (inputFile)
{
	for (int fileReader = 0; fileReader < totalNum; fileReader++)
	{
		inputFile >> data[fileReader].lastName;
		inputFile >> data[fileReader].firstName;
		inputFile >> data[fileReader].phone;
		inputFile >> data[fileReader].email;
		totalNum++;
	}
}
	
choice = dispMenu();
while (choice != "e" && choice != "E")
{
	// Add a person.
	if (choice == "a" || choice == "A")
	{
		addPerson(data, totalNum);
		totalNum++;
		//choice = dispMenu();
	}

	// Delete a person.
	else if (choice == "d" || choice == "D")
	{
		deletePerson(data, totalNum);
		//choice = dispMenu();
	}

	// Find a person.
	else if (choice == "f" || choice == "F")
	{
		int info;
		cin.ignore(80, '\n');
		cout << "Enter the last name of the person you want to find:\n";
		getline(cin, find);
		info = findAndDisplayPerson(data, totalNum, find);
		cout << "============================\n";
		cout << "\n" << data[info].firstName << "\t";
		cout << data[info].lastName << "\t";
		cout << data[info].phone << "\t";
		cout << data[info].email << "\n";
		//choice = dispMenu();
	}

	// List all people.
	else if (choice == "l" || choice == "L")
	{
		sortPeople(data, totalNum);
		listAllPeople(data, totalNum);
		//choice = dispMenu();
	}

	// Save the list.
	else if (choice == "s" || choice == "S")
	{
		saveList(data, totalNum);
		//choice = dispMenu();
	}

	// Invalid selection.
	else
	{
		cout << "Invalid Choice. Try again:\n";
		//choice = dispMenu();
	}
	choice = dispMenu();
}
	return 0;
}

//======================================================
// dispMenu: displays the main menu and gets the users choice.
// parameters: none
// return type: string
//======================================================
string dispMenu(void)
{
	string choice;

	cout << "============================\n";
	cout << "Main Menu" << endl;
	cout << "A) Add Person" << endl;
	cout << "D) Delete Person" << endl;
	cout << "F) Find and Display Person" << endl;
	cout << "L) List All People" << endl;
	cout << "S) Save List" << endl;
	cout << "E) Exit" << endl;
	cout << "Enter Choice:\n";
	cout << "============================\n";


	cin >> choice;

	return choice;
}


//======================================================
// addPerson: adds a contact to the address book.
// parameters: 
//    person: the array of structs representing people
//    totalNum: the number of people in the array
// return type: none
//======================================================
void addPerson(person data[], int & totalNum)
{
	int length; // length of the phone number.
	bool isValid; // indicates whether or not the phone number is real.
	string firstName, lastName, email, phone; // placeholding variables for the first and last name, the email, and the phone number.

	cin.ignore(80, '\n');
	cout << "\nEnter a first name: \n";
	getline(cin, firstName);
	data[totalNum].firstName = firstName;
	cout << "\nEnter a last name: \n";
	getline(cin, lastName);
	data[totalNum].lastName = lastName;
	cout << "\nEnter a contact number: \n";
	getline(cin, phone);
	data[totalNum].phone = phone;
	length = data[totalNum].phone.length();
	isValid = validatePhone(data, length, totalNum);
	while (!isValid)
	{
		cout << "\nEnter a contact number: \n";
		cin >> data[totalNum].phone;
		length = data[totalNum].phone.length();
		isValid = validatePhone(data, length, totalNum);
	}
	cout << "\nEnter a contact email: \n";
	getline(cin, email);
	data[totalNum].email = email;
	cout << "\n\n";
}

//======================================================
// validatePhone: makes sure the phone number is real.
// parameters: 
//    person: the array of structs representing people
//    totalNum: the number of people in the array
//    length: the number of characters in the phone number
// return type: bool
//======================================================
bool validatePhone(person data[], int length, int totalNum)
{
	bool isValid = true; // indicates if the phone number is real.
	for (int count = 0; count < length; count++)
	{
		if (!isdigit(data[totalNum].phone[count]) && !ispunct(data[totalNum].phone[count]) && !isspace(data[totalNum].phone[count]))
		{
			isValid = false;
		}
	}
	return isValid;
}

//======================================================
// deletePerson: removes a contact from the address book.
// parameters: 
//    person: the array of structs representing people
//    totalNum: the number of people in the array
// return type: none
//======================================================
void deletePerson(person data[], int & totalNum)
{
	string deleteThis; // the last name to be deleted.
	int deleteLocation; // the subscript of the last name to be deleted.
	cin.ignore(80, '\n');

	cout << "Which contact would you like to delete (last name)?\n";
	getline(cin, deleteThis);
	deleteLocation = findAndDisplayPerson(data, totalNum, deleteThis);
	if (deleteLocation < 0)
	{
		cout << "Dummy. That name doesn't exist.\n";
	}
	else
	{
		totalNum--;
		for (int count = deleteLocation; count < totalNum; count++)
		{
			data[count] = data[count + 1];
		}
	}
}

//======================================================
// findAndDisplayPerson: locates a contact and displays its info.
// parameters: 
//    person: the array of structs representing people
//    totalNum: the number of people in the array
//    find: the last name to be found.
// return type: int
//======================================================
int findAndDisplayPerson(person data[], int totalNum, string find)
{
	int index = 0; // counter
	int position = -1; // subscript of the target.
	bool found = false; // indicates if the target has been located.
	while (index < totalNum && !found)
	{
		if (data[index].lastName == find)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}

//======================================================
// listAllPeople: lists all the people in the address book.
// parameters: 
//    person: the array of structs representing people
//    totalNum: the number of people in the array
// return type: none
//======================================================
void listAllPeople(person data[], int totalNum)
{ 
	sortPeople(data, totalNum);
	cout << "============================\n";
	cout << "CONTACT LIST:\n";
	for (int count = 0; count < totalNum; count++)
	{
		cout << data[count].lastName << "\n";
		cout << data[count].firstName << "\n";
		cout << data[count].phone << "\n";
		cout << data[count].email << "\n\n";
	}
	cout << "============================\n\n";
	
}

//======================================================
// saveList: saves the array to a file to be accessed later.
// parameters: 
//    person: the array of structs representing people
//    totalNum: the number of people in the array
// return type: none
//======================================================
void saveList(person data[], int totalNum)
{
	ofstream outputFile;
	outputFile.open("book.txt");

	if (totalNum == 0)
	{
		cout << "Nothing to save.\n";
	}
	else
	{
		for (int fileReader = 0; fileReader < totalNum; fileReader++)
		{
			outputFile << data[fileReader].lastName << ", ";
			outputFile << data[fileReader].firstName << ", ";
			outputFile << data[fileReader].phone << ", ";
			outputFile << data[fileReader].email << "\n";
		}
		cout << "Save complete.\n";

	}
	
}

//======================================================
// sortPeople: sorts the contacts in ascending order by last name.
// parameters: 
// person: the array of structs representing people
// totalNum: the number of people in the array
// return type: none
//======================================================
void sortPeople(person data[], int totalNum)
{
	bool swap; // indicates if a value has been swapped
	person temp; // placeholder variable to allow movement within the array.

	do
	{
		swap = false;
		for (int count = 0; count < (totalNum - 1); count++)
		{
			if (data[count].lastName > data[count + 1].lastName)
			{
				temp = data[count];
				data[count] = data[count + 1];
				data[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}