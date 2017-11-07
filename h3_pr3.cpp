/*
    h3_pr3.cpp
    This program calculates the distance a car travels at a constant speed.
    By: Humberto Gonzalez Sanchez, A00822594.
    Programming fundamentals, Homework 3.
    7/9/2017
    v. 1.0
*/

#include <iostream>

using namespace std;

/*
    readSpeed
    Function that asks the user for the speed of the car (floating point number).
    Parameters: None.
    Returns: Speed (floating point number).
*/
float readSpeed()
{
    float fMySpeed;
    cout << "Please enter the speed of the car." << endl;
    cin >> fMySpeed;

    return fMySpeed;
}

/*
    readTime
    Function that asks the user for the time the car travels (floating point number).
    Parameters: None.
    Returns: Time (floating point number).
*/
float readTime()
{
    float fMyTime;
    cout << "Please enter the time the car travels." << endl;
    cin >> fMyTime;

    return fMyTime;
}

/*
    getDistance
    Function that applies the formula to get the distance traveled.
    Parameters: Speed (floating point number) and Time (floating point number).
    Returns: The distance traveled (floating point number).
*/
float getDistance(float fTheirSpeed, float fTheirTime)
{
    float fMyDistance;
    fMyDistance = fTheirSpeed * fTheirTime;

    return fMyDistance;
}

/*
    showResult
    Function that displays the result onto the screen.
    Parameters: Distance (floating point number).
    Returns: Nothing.
*/
void showResult(float FResult)
{
    cout << "The distance traveled is: " << FResult << "." << endl;
}

/*
    main
    Function that calls the input, process and output functions that calculate the distance traveled.
    Parameters: None.
    Returns: 0.
*/
int main()
{
    // Declare and initialize variables.
    float fSpeed, fTime, fDistance;

    // Input functions requesting data to the user.
    fSpeed = readSpeed();
    fTime = readTime();

    // Processing function that applies the formula.
    fDistance = getDistance(fSpeed, fTime);

    // Output function that displays the result to the user.
    showResult(fDistance);

    return 0;
}

/*
    Analysis:
        Input: Ask for speed in floating point numbers, Ask for time in seconds as positive floating point numbers.
        Process: Use the distance formula d=Speed*Time.
        Output: Display the distance in floating point numbers.

    Design:
        Proceso DistanceTraveled

        Input
        Escribir "Enter the speed in floating point numbers."
        Leer S
        Escribir "Enter the time in seconds as positive floating point numbers."
        Leer T

        Process
        D<-S*T

        Output
        Escribir "The distance is ",D

        FinProceso

    Average test cases:
        - A car moving at 5 units per second for 20 seconds, expected result is 100.
        - A car moving at 160 units per second for 60 seconds, expected result is 9600.
        - A car moving at 85 units per second for 180 seconds, expected result is 15300.
        - A car moving at 74.5 units per second for 34 seconds, expected result is 2533.
        - A car moving at 40 units per second for 25.6 seconds, expected result is 1024.
*/
