/*
	LoopsCw03.cpp
	Program that that calculates the sum of n fractions of the following series: 1/2 + 1/3 + 1/4 + 1/5 + 1/6 ...
	By: Humberto Gonzalez Sanchez
	10/10/2017
	v. 1.0
*/
#include <iostream>

using namespace std;

/*
	getNumber
	function that receives the desired number of fractions to add
	parameters: none
	returns: the number of fractions (integer)
*/
int getNumber()
{
	int iTheirNumber;
	cin >> iTheirNumber;

	return iTheirNumber;
}

/*
	addFractions
	function that uses the input to calculate the correct result
	parameters: the number of fractions (integer)
	returns: the addition of fractions (float)
*/
float addFractions(int iNum)
{
	float fSum = 1;

	for (float i = 1; i <= iNum; i++)
	{
		fSum += 1 / (i + 1);
	}

	return fSum;
}

/*
	showResult
	function that displays the result to the user
	parameters: result of the addition (float)
	returns: nothing
*/
void showResult(float fResult)
{
	cout << fResult << endl;
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
	float iSum;

	// Input function that receives data from the user
	iNumber = getNumber();

	// Processing function that calculates the result
	iSum = addFractions(iNumber);

	// Output function that displays the result to the user
	showResult(iSum);

	return 0;
}