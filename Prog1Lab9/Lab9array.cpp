#include <iostream>
using namespace std;

int findLargest(int, int num[]);
int findSmallest(int, int num[]);

int main()
{
    const int numberOfValues = 10;
    int num[numberOfValues], largestInit, smallestInit, count;
    cout << "Enter the ten numbers to be stored in the array. \n" ;
    for (count = 0; count < 10; count++)
    {
        cin >> num[count];
    }
    largestInit = 0;
    smallestInit = 10;
    largestInit = findLargest(largestInit, num);
    smallestInit = findSmallest(smallestInit, num);
    cout << "The largest value is " << largestInit << " and the smallest value is " << smallestInit << ". \n";
    return 0;
}

// Finds the largest value
int findLargest(int largestInit, int num[])
{
    int count;
    for (count = 0; count < 10; count++)
    {
        if (num[count] > largestInit)
        {
            largestInit = num[count];
        }
    }
    return largestInit;
}

// Finds the smallest value
int findSmallest(int smallestInit, int num[])
{
    int count;
    for (count = 0; count < 10; count++)
    {
        if (num[count] < smallestInit) 
        {
            smallestInit = num[count];
        }
    }
    return smallestInit;
}