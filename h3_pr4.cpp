/*
    h3_pr4.cpp
    This program calculates the final grade of the course.
    By: Humberto Gonzalez Sanchez, A00822594.
    Programming fundamentals, Homework 3.
    7/9/2017
    v. 1.0
*/

#include <iostream>

using namespace std;

/*
    readMonthlyEvaluations
    Function that asks the user for the monthly evaluations' grade (floating point number).
    Parameters: None.
    Returns: Monthly Evaluations' grade (floating point number).
*/
float readMonthlyEvaluations()
{
    float fMyMonthlyEvaluations;
    cout << "Please enter the monthly evaluations' grade." << endl;
    cin >> fMyMonthlyEvaluations;

    return fMyMonthlyEvaluations;
}

/*
    readFinalExam
    Function that asks the user for the final exam's grade (floating point number).
    Parameters: None.
    Returns: Final exam's grade (floating point number).
*/
float readFinalExam()
{
    float fMyFinalExam;
    cout << "Please enter the final exam's grade." << endl;
    cin >> fMyFinalExam;

    return fMyFinalExam;
}
/*
    readMiniProject
    Function that asks the user for the mini project's grade (floating point number).
    Parameters: None.
    Returns: Mini project's grade (floating point number).
*/
float readMiniProject()
{
    float fMyMiniProject;
    cout << "Please enter the mini project's grade." << endl;
    cin >> fMyMiniProject;

    return fMyMiniProject;
}

/*
    readSemanaI
    Function that asks the user for the semana i's grade (floating point number).
    Parameters: None.
    Returns: Semana i's grade (floating point number).
*/
float readSemanaI()
{
    float fMySemanaI;
    cout << "Please enter the semana i's grade." << endl;
    cin >> fMySemanaI;

    return fMySemanaI;
}

/*
    getFinalGrade
    Function that calculates the final grade of the course.
    Parameters: Monthly evaluations' grade, final exam's grade, mini project's grade and semana i's grade (floating point numbers).
    Returns: Final grade (floating point number).
*/
float getFinalGrade(float fTheirMonthlyEvaluations, float fTheirFinalExam, float fTheirMiniProject, float fTheirSemanaI)
{
    float fMyFinalGrade;
    fMyFinalGrade = fTheirMonthlyEvaluations * 0.6 + fTheirFinalExam * 0.3 + fTheirMiniProject * 0.05 + fTheirSemanaI * 0.05;

    return fMyFinalGrade;
}

/*
    showResult
    Function that displays the result onto the screen.
    Parameters: Final grade (floating point number).
    Returns: Nothing.
*/
void showResult(float fResult)
{
    cout << "The final grade is: " << fResult << "." << endl;
}

/*
    main
    Function that calls the input, process and output functions that together get the final grade.
    Parameters: None.
    Returns: 0.
*/
int main()
{
    // Declare and initialize variables.
    float fMonthlyEvaluations, fFinalExam, fMiniProject, fSemanaI, fFinalGrade;

    // Input functions requesting data to the user.
    fMonthlyEvaluations = readMonthlyEvaluations();
    fFinalExam = readFinalExam();
    fMiniProject = readMiniProject();
    fSemanaI = readSemanaI();

    // Processing function that applies the formula.
    fFinalGrade = getFinalGrade(fMonthlyEvaluations, fFinalExam, fMiniProject, fSemanaI);

    // Output function that displays the result to the user.
    showResult(fFinalGrade);

    return 0;
}

/*
     Analysis:
        Input: Ask for monthly evaluations grade in floating point numbers from 0 to 100, Ask for final exam grade in floating point numbers from 0 to 100,
               Ask for mini project grade in floating point numbers from 0 to 100, Ask for Semana i grade in floating point numbers from 0 to 100.
        Process: 1. Get the percentage of each grade doing the following:
                    -MonthlyEvaluations * .6
                    -FinalExam * .3
                    -MiniProject * .05
                    -Semanai * .05
                2. Add them all.
        Output: Display the final grade in floating point numbers from 0 to 100.

    Design:
        Proceso finalGrade

        Input
        Escribir "Enter the Monthly evaluations' grade."
        Leer ME
        Escribir "Enter the Final exam's grade."
        Leer FE
        Escribir "Enter the mini-Project's grade."
        Leer MP
        Escribir "Enter the Semana i's grade."
        Leer IW

        Process
        FG<-ME*.6 + FE*.3 + MP*.05 + IW*.05

        Output
        Escribir "The final grade is ",FG

        FinProceso

    Average test cases:
        - A student whose monthly evaluations grade is 85, final exam is 64, mini project is 90, semana i is 80, expected result is 78.7.
        - A student whose monthly evaluations grade is 98, final exam is 50, mini project is 100, semana i is 100, expected result is 83.8.
        - A student whose monthly evaluations grade is 64, final exam is 100, mini project is 100, semana i is 90, expected result is 77.9.
        - A student whose monthly evaluations grade is 71.5, final exam is 99.5, mini project is 35, semana i is 100, expected result is 79.5.
        - A student whose monthly evaluations grade is 100, final exam is 85, mini project 93.5, semana i is 15, expected result is 90.925.
*/
