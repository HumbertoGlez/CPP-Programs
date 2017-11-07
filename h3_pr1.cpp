/*
    h3_pr1.cpp
    This program calculates the volume of a Cylinder.
    By: Humberto Gonzalez Sanchez, A00822594.
    Programming fundamentals, Homework 3.
    7/9/2017
    v. 1.0
*/

#include <iostream>

using namespace std;

/*
    readRadius
    Function that asks the user for the radius of the cylinder (floating point number).
    Parameters: None.
    Returns: Radius (floating point number).
*/
float readRadius()
{
    float fMyRadius;
    cout << "Please enter the radius of the cylinder." << endl;
    cin >> fMyRadius;

    return fMyRadius;
}

/*
    readHeight
    Function that asks the user for the height of the cylinder (floating point number).
    Parameters: None.
    Returns: Height (floating point number).
*/
float readHeight()
{
    float fMyHeight;
    cout << "Please enter the height of the cylinder." << endl;
    cin >> fMyHeight;

    return fMyHeight;
}

/*
    getVolume
    Function that applies the formula to calculate the volume.
    Parameters: Radius (floating point number) and Height (floating point number).
    Returns: Volume of the cylinder (floating point number).
*/
float getVolume(float fTheirRadius, float fTheirHeight)
{
    float fMyVolume, fPi = 3.141592;
    fMyVolume = fTheirRadius * fTheirRadius * fPi * fTheirHeight;

    return fMyVolume;
}

/*
    showResult
    Function that displays the result onto the screen.
    Parameters: Volume (floating point number).
    Returns: Nothing.
*/
void showResult(float fResult)
{
    cout << "The volume is " << fResult << "." << endl;
}

/*
    main
    Function that calls the input, process and output functions that together get the volume.
    Parameters: None.
    Returns: 0.
*/
int main()
{
    // Declare and initialize variables.
    float fRadius, fHeight, fVolume;

    // Input functions requesting data to the user.
    fRadius = readRadius();
    fHeight = readHeight();

    // Processing function that applies the formula.
    fVolume = getVolume(fRadius, fHeight);

    // Output function that displays the result to the user.
    showResult(fVolume);

    return 0;
}

/*
    Analysis:
        Input: Ask for radius in floating point numbers, Ask for height in floating point numbers.
        Process: Use the volume formula V=PI*radius^2*height.
        Output: Display the volume in floating point numbers.

    Design:
        Proceso cylinderVolume

        -Input
        Escribir "Enter the radius in floating point numbers."
        Leer R
        Escribir "Enter the height in floating point numbers."
        Leer H

        -Process
        V<-PI*R^2*H

        -Output
        Escribir "The volume is ",V

        FinProceso

    Average test cases:
        - A cylinder with a radius of 5 units and a height of 10 units, expected result is 785.398.
        - A cylinder with a radius of 10 units and a height of 15 units, expected result is 4712.39.
        - A cylinder with a radius of 4.5 units and a height of 13.5 units, expected result is 858.833.
        - A cylinder with a radius of 59.8 units and a height of 112 units, expected result is 1 258 259.63.
        - A cylinder with a radius of 1.34 units and a height of 3.06 units, expected result is 17.2616.
*/
