/*
	LoopsCw04.cpp
	function that calculates the n-th element within the Fibonacci series: 1 1 2 3 5 8 13 ...
	By: Humberto Gonzalez Sanchez
	10/10/2017
	v. 1.0
*/

/*
	fibo
	function that calculates the n-th element within the Fibonacci series
	parameters: position within the series (integer)
	returns: number in that position (integer)
*/
int fibo(int iPos)
{
	int iNum = 0, iAcc1 = 0, iAcc2 = 1;

	for (int i = 0; i < iPos; i++)
	{
		if (i == 0)
		{
		    iNum = 1;
		}
		else 
		{
		    iNum = iAcc1 + iAcc2;
		    iAcc1 = iAcc2;
		    iAcc2 = iNum;
		}
		    
	}

	return iNum;
}