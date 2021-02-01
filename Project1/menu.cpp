#include "headers/menu.h"
#include <iostream>
#include <string>
#include <deque>
#include <map>

using namespace std;

void printMenu()
{
    cout << "********************************" << endl;
    cout << " Enter your choice:" << endl;
    cout << "1) Add new patient" << endl;
    cout << "2) Print all patients" << endl;
    cout << "3) Get next patient" << endl;
    cout << "4) Exit" << endl;
    cout << "********************************" << endl;
}

int readChoice(Hospital &hospital, int choice)
{
    string spec, pname;
    bool urg = false;

    switch (choice)
    {
    case 1:
        cout << "Enter the speciality's name, patient name and urgency (0 if non urgent or 1 if urgent)" << endl;
        cin >> spec >> pname >> urg;
        hospital.addPatientSpec(spec, pname, urg);
        break;
    case 2:
        cout << "Enter the speciality's name" << endl;
        cin >> spec;
        hospital.showPatientSpec(spec);
        break;
    case 3:
        cout << "Enter the speciality's name and urgency (0 if non urgent or 1 if urgent)" << endl;
        cin >> spec >> urg;
        hospital.getNextPatientSpec(spec, urg);
        break;
    case 4:
        return 1;
    }

    return 0;
}

int main()
{
    Hospital hospital = Hospital();
    int userChoice = 0;
    int end = 0;

    while (end != 1)
    {
        printMenu();
        cin >> userChoice;
        end = readChoice(hospital, userChoice);
        //break;
    }

    return 0;
}