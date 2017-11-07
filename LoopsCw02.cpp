/*
  LoopsCw02.cpp
  Program that that calculates the factorial of input number
  By: Humberto Gonzalez Sanchez
  09/10/2017
  v. 1.0
*/
#include <iostream>

using namespace std;

/*
  getNumber
  functiont that receives the number the user inputs
  parameters: none
  returns: the number provided by the user (integer)
*/
int getNumber()
{
  int iNum;
  cin >> iNum;
  
  return iNum;
}

/*
  getFactorial
  Processing function that calculates the factorial of the number provided by the user
  parameters: number given by the user (integer)
  returns: factorial (integer)
*/
int getFactorial(int iMyNumber)
{
  int iCounter = 1, iFactorial = 1;
  while (iCounter <= iMyNumber)
  {
    iFactorial *= iCounter;
    iCounter++;
  }
  
  return iFactorial;
}

/*
  showResult
  Output function that displays the result to the user
  parameters: resultant factorial (integer)
  returns: nothing.
*/
void showResult(int iResult)
{
  cout << iResult << endl;
}

/*
  main
  function that calls the functions that form the program
  parameters: none
  returns: 0
*/
int main()
{
  // Declare and initialize variables
  int iNumber, iFactorial;
  
  // Input function
  iNumber = getNumber();
  
  // Processing function
  iFactorial = getFactorial(iNumber);
  
  // Output function
  showResult(iFactorial);
  
  return 0;
}