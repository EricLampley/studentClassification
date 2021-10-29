//---------------------------------------------------------------------------
// File name:   classification.cpp
// Assign ID:   PROG1
// Due Date:    August 31, 2021 
// Purpose:     Write a program to determine the classification of four(4)
//              students. Display each student's name and classification
//              using the output format below.
//
//              Then display the number of students that fall into each
//              classification  using the output format below.
//
//              Inputs from keyboard:  4 lines, each containing:
//
//              credithours student_full_name  [name can be multiple words] 
//Author:       lampE023
//-------------------------------------------------------------------------
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    //-|----------------------------------------------------------------------
    //-|Print the copyright notice, to screen.
    //-|----------------------------------------------------------------------
    cout << endl << endl << "(c) 2021, lampE023" << endl;

    //----------------------------------------------------------------------
    //  Declare variables
    //----------------------------------------------------------------------
    int creditHours1;
    int Freshman = 0, Sophomore = 0, Junior = 0, Senior = 0;
    string fullName1;
    string classification;

    //----------------------------------------------------------------------
    //     Repeat Steps 1-4 for 2nd, 3rd, and 4th student
    //----------------------------------------------------------------------
    for (int i = 1; i <= 4; i++) {

        //-|----------------------------------------------------------------------
        //-| 1. Read values for credit hours and full name 
        //-|----------------------------------------------------------------------
        cout << "Enter credit hours and full name (e.g, 14 Ed Jones): " << endl; // Output to user to input information

        cin >> creditHours1;  // read in 1st credit hours
        getline(cin, fullName1); // Read in 1st full name 

        cout << endl;
        //-|----------------------------------------------------------------------
        //-| Determine student classification using the specified scale
        //-| and update count for classification.
        //-|----------------------------------------------------------------------

        if (creditHours1 < 30) {
            classification = "freshman";
            Freshman++;
        }
        else if (creditHours1 >= 30 && creditHours1 <= 59) {
            classification = "sophomore";
            Sophomore++;
        }
        else if (creditHours1 >= 60 && creditHours1 <= 89) {
            classification = "junior";
            Junior++;
        }
        else if (creditHours1 >= 90) {
            classification = "senior";
            Senior++;
        }
        //-|----------------------------------------------------------------------
        //-| 4. Display student name and classification.
        //-|----------------------------------------------------------------------

        cout << fullName1 << " (" << creditHours1 << " credits) is a " << classification << "." << endl << endl;
    }
    //-|----------------------------------------------------------------------
    //-|     8. Display counts for each classification.
    //-|----------------------------------------------------------------------
    cout << "Number of freshmen = " << Freshman << endl;
    cout << endl;
    cout << "Number of sophomores = " << Sophomore << endl;
    cout << endl;
    cout << "Number of juniors = " << Junior << endl;
    cout << endl;
    cout << "Number of seniors = " << Senior << endl;


    //-|----------------------------------------------------------------------
    //-|Print the copyright notice to monitor.
    //-|----------------------------------------------------------------------
    cout << endl << endl << "(c) 2021, lampE023" << endl;

    return 0;

} //main
