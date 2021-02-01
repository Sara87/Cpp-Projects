#include "headers/hospital.h"

using namespace std;

Hospital::Hospital()
{
    specials.reserve(5);
    specials.push_back(Specialization("cardiology"));
    specials.push_back(Specialization("dermathology"));
    specials.push_back(Specialization("orthopedics"));
    specials.push_back(Specialization("neurology"));

    cout << "The specializations: " << endl
         << endl;

    for (auto &s : specials)
    {
        cout << s.name << endl
             << endl;
    }
}

void Hospital::addSpecialization(string spec)
{
    if (specials.size() < 10)
    {
        Specialization s(spec);
        specials.push_back(s);
    }
}

void Hospital::removeSpecialization(string spec)
{
    int i = 0;

    for (auto &s : specials)
    {
        if (s.name == spec)
        {
            specials.erase(specials.begin() + i);
        }
        i++;
    }
}

void Hospital::addPatientSpec(string spec, string p, bool urg)
{

    for (auto &s : specials)
    {
        if (s.name == spec)
        {
            s.addPatient(p, urg);
        }
    }
}

void Hospital::removePatientSpec(string spec, bool urg)
{
    for (auto &s : specials)
    {
        if (s.name == spec)
        {
            s.removePatient(urg);
        }
    }
}

void Hospital::showPatientSpec(string spec)
{
    for (auto &s : specials)
    {
        if (s.name == spec)
        {
            s.showPatients();
        }
    }
}

void Hospital::getNextPatientSpec(string spec, bool urg)
{
    for (auto &s : specials)
    {
        if (s.name == spec)
        {
            s.getNextPatient(urg);
        }
    }
}