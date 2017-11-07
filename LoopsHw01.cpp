/*
	LoopsHw01.cpp
	program that displays a pattern of numbers based on a provided initial number.
	By: Humberto Gonzalez Sanchez
	10/10/2017
	v. 1.0
*/
#include <iostream>

using namespace std;

/*
	getNumber
	function that receives the number of reference for the series
	Parameters: none
	returns: the number of reference (integer)
*/
int getNumber()
{
	int iNum;
	cin >> iNum;

	return iNum;
}

/*
	calcSeries
	function that calculates the numbers in the series using the number provided and displays them
	parameters: Number of reference (integer)
	returns: nothing
*/
void calcSeries(int iNumber)
{
	int iNumberOfValues = (iNumber * 2) - 1;
	int iSeries[iNumberOfValues];

	for (int i = 0; i < iNumberOfValues; i++)
	{
		if (i <= iNumber)
		{
			iSeries[i] = iNumber - i;
		}
		else
		{
			iSeries[i] = (i - iNumber) + 2;
		}
		cout << iSeries[i] << " ";
	}	
}

/*
	Main
	function that calls the functions that form the program
	parameters: none
	returns: 0
*/
int main()
{
	// Declaration and initalization of variables
	int iNumber;

	// Input function that receives data from the user
	iNumber = getNumber();

	// Processing and output function that calculates the result and displays it to the user
	calcSeries(iNumber);

	return 0;
}