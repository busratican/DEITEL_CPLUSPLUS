#ifndef BASEPLUS_H
#define BASEPLUS_H

#include<string>
#include "CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{

public:
    BasePlusCommissionEmployee(const string &,const string &,const string &,
                           double=0.0, double = 0.0, double = 0.0);

    void setBaseSalary(double); //set base salary.
    double getBaseSalary() const; //return base salary.

    virtual double earnings() const; //calculate earnings.
    virtual void print() const; //print BaseSalaryCommmissionEmployee object.


private:
    double baseSalary; //base salary.
};
#endif // BASEPLUS_H
