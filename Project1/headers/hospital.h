#ifndef HOSPITAL_H
#define HOSPITAL_H

#include "specialization.h"
#include <vector>

class Hospital
{
    std::vector<Specialization> specials;

public:
    Hospital();
    void addSpecialization(std::string spec);
    void removeSpecialization(std::string spec);
    void addPatientSpec(std::string spec, std::string p, bool urg);
    void removePatientSpec(std::string spec, bool urg);
    void showPatientSpec(std::string spec);
    void getNextPatientSpec(std::string spec, bool urg);
};

#endif