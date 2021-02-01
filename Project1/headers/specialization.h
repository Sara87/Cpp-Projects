#ifndef SPECIALIZATION_H
#define SPECIALIZATION_H

#include <iostream>
#include <string>
#include <deque>

class Specialization{
    public:
    std::string name;
    std::deque<std::string> patients;
    int number_patients; 

    Specialization(std::string name = "");
    void addPatient(std::string name, bool urgent);
    void removePatient(bool urgent);
    void showPatients();
    void getNextPatient(bool urg);
};

#endif