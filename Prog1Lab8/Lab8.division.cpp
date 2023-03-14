#include <iostream>
#include <string>
using namespace std;

// Function Prototypes
double getSales(string);
void findHighest(double, double, double, double);

int main()
{
    double sales1, sales2, sales3, sales4;
    string name1, name2, name3, name4;
    name1 = "Northeast";
    sales1 = getSales(name1);
    name2 = "Southeast";
    sales2 = getSales(name2);
    name3 = "Northwest";
    sales3 = getSales(name3);
    name4 = "Southwest";
    sales4 = getSales(name4);
    findHighest(sales1, sales2, sales3, sales4);
	return 0;
}

double getSales(string name)
{
	double divSale;
	cout << "Enter the quarterly sales figure for the " << name << " division. \n";
	cin >> divSale;
	while (divSale <= 0)
	{
	    cout << "Invalid Input \n";
	    cin >> divSale;
	}
	return divSale;
}

void findHighest(double sales1, double sales2, double sales3, double sales4)
{
	double leaderAmt = 0;
	int leaderNum;
	if (sales1 >= leaderAmt)
		leaderAmt = sales1;
	if (sales2 >= leaderAmt)
		leaderAmt = sales2;
	if (sales3 >= leaderAmt)
		leaderAmt = sales3;
	if (sales4 >= leaderAmt)
		leaderAmt = sales4;
	if (leaderAmt == sales1)
		cout << "The Northeast division wins with a total of $" << sales1 << endl;
	if(leaderAmt == sales2)
		cout << "The Southeast division wins with a total of $" << sales2 << endl;
	if(leaderAmt == sales3)
		cout << "The Northwest division wins with a total of $" << sales3 << endl;
	if(leaderAmt == sales4)
		cout << "The Southwest division wins with a total of $" << sales4 << endl;	
}