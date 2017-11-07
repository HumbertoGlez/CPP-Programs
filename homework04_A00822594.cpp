/*
    homework04_A00822594.cpp
    This program implements functions to solve math problems.
    By: Humberto Gonzalez Sanchez.
    Programming Fundamentals, homework 4.
    11/9/2017
    v. 1.0
*/

#include <iostream>

using namespace std;

/*
    calculator
    Function that specifies the operation to be performed between two provided numbers.
    Parameters: 2 floating point numbers and a character in that order.
    Returns: The result of the operation performed.

    Average Test Cases:
    - The input is 2, 4, a. Expected result is 6.
    - The input is 4, 3, s. Expected result is 1.
    - The input is 5, 3, m. Expected result is 15.
*/
float calculator(float fNumberA, float fNumberB, char cOperation)
{
    // Declare and initialize the variable that will store the result.
    float fResult;

    // Conditional that performs the correct operation for each character.
    if (cOperation == 'a')
    {
        fResult = fNumberA + fNumberB;
    }
    else if (cOperation == 's')
    {
        fResult = fNumberA - fNumberB;
    }
    else if (cOperation == 'm')
    {
        fResult = fNumberA * fNumberB;
    }
    else if (cOperation == 'd')
    {
        fResult = fNumberA / fNumberB;
    }

    return fResult;
}

/*
    biggestNumber
    Function that returns the biggest out of three numbers.
    Parameters: 3 Integer numbers.
    Returns: The biggest number of them all.

    Average Test Cases:
    - The input is 8, 4, 5. Expected result is 8.
    - The input is 25, 87, 38. Expected result is 87.
    - The input is 1, 2, 3. Expected result is 3.
*/
int biggestNumber(int iNumberOne, int iNumberTwo, int iNumberThree)
{
    // Declare and initialize the variable that will store the biggest integer.
    int iBigBoy;

    // Conditional that checks for the biggest integer.
    if (iNumberOne >= iNumberTwo && iNumberOne >= iNumberThree)
    {
        iBigBoy = iNumberOne;
    }
    else if (iNumberTwo >= iNumberOne && iNumberTwo >= iNumberThree)
    {
        iBigBoy = iNumberTwo;
    }
    else
    {
        iBigBoy = iNumberThree;
    }

    return iBigBoy;
}

/*
    isEven
    Function that checks if an integer is even.
    Parameters: Integer number to check.
    Returns: Whether the integer is even or not.

    Average Test Cases:
    - The input is 5, expected result is false.
    - The input is 4, expected result is true.
    - The input is 1256, expected result is true.
*/
int isEven(int iNumberChecked)
{
    // Declare and initialize the variable that will store the answer.
    int iAnswer;

    // Conditional that checks if the integer is even or odd.
    if (iNumberChecked % 2 == 0)
    {
        iAnswer = true;
    }
    else
    {
        iAnswer = false;
    }

    return iAnswer;
}

/*
    isOddAndMultipleOfFive
    Function that checks if an integer number is odd and multiple of five.
    Parameters: Integer number to check.

    Average Test Cases:
    - The input is 5, expected result is true.
    - The input is 225, expected result is true.
    - The input is 2, expected result is false.
*/
int isOddAndMultipleOfFive(int iTest)
{
    // Declare and initialize the variable that will store the answer.
    int iAnswer;

    // Conditional that checks if the integer is odd and multiple of five to assign true or false.
    if (iTest % 2 != 0 && iTest % 5 == 0)
    {
        iAnswer = true;
    }
    else
    {
        iAnswer = false;
    }

    return iAnswer;
}

/*
    daysInTheMonth
    Function that checks the number of the month and assigns a maximum number of days corresponding to that month.
    Parameters: Integer corresponding to the month.
    Returns: The maximum number of days for the given month.

    Average Test Cases:
    - The input is 2, expected result is 28.
    - The input is 8, expected result is 31.
    - The input is 4, expected result is 30.
*/
int daysInTheMonth(int iMonth)
{
    // Declare and initialize the variable that will store the maximum days according to the month.
    int iMaxDays;

    // Conditional that checks the month's number and assigns a maximum number of days based on it.
    if (iMonth == 1 || iMonth == 3 || iMonth == 5 || iMonth == 7 || iMonth == 8 || iMonth == 10 || iMonth == 12)
    {
        iMaxDays = 31;
    }
    else if (iMonth == 4 || iMonth == 6 || iMonth == 9 || iMonth == 11)
    {
        iMaxDays = 30;
    }
    else if (iMonth == 2)
    {
        iMaxDays = 28;
    }

    return iMaxDays;
}

int main()
{
    return 0;
}
