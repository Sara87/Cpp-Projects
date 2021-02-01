#include "headers/specialization.h"

using namespace std;

Specialization::Specialization(string n)
{
    name = n;
    number_patients = patients.size();
}

void Specialization::addPatient(string name, bool urgent)
{

    if (number_patients < 5)
    {
        if (urgent)
        {
            patients.push_front(name);
            cout << "Patient " << name << " inserted at front " << endl
                 << endl;
            number_patients = patients.size();
        }
        else
        {
            patients.push_back(name);
            cout << "Patient " << name << " inserted at back" << endl
                 << endl;
            number_patients = patients.size();
        }
    }
    else
    {
        cout << "This specialization is full" << endl
             << endl;
    }
}

void Specialization::removePatient(bool urgent)
{
    if (urgent)
    {
        patients.pop_front();
        number_patients = patients.size();
        cout << "Patient " << patients.at(0) << " removed from front" << endl
             << endl;
    }
    else
    {
        cout << "Patient " << patients.at(number_patients - 1) << " removed from back" << endl
             << endl;
        patients.pop_back();
        number_patients = patients.size();
    }
}

void Specialization::showPatients()
{
    size_t len = patients.size();
    deque<string>::iterator it;
    int i = 0;

    for (it = patients.begin(); it != patients.end(); it++)
    {
        cout << "Patient " << i << ": " << *it << endl <<endl;
        i++;
    }
}

void Specialization::getNextPatient(bool urg)
{
    if (patients.size() == 0)
    {
        cout << "No patients at the moment" << endl;
    }
    else
    {
        Specialization::removePatient(urg);
    }
}