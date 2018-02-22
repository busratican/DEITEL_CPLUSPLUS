#ifndef COMISSION_H
#define COMISSION_H

#include<string>
using namespace std;


class CommissionEmployee{
public:
    CommissionEmployee(const string &,const string &,const string &,double = 0.0,double = 0.0);

    void setFirstName(const string &);
    string getFirstName() const;

    void setLastName(const string &);
    string getLastName() const;

    void setSSN(const string &);
    string getSSN() const;


    void setGrossSales(double);
    double getGrossSales() const;


    void setCommissionRate(double);
    double getCommissionRate() const;

    double earnings() const;
    void print() const;

private:
    string firstName;
    string lastName;
    string SSN;
    double grossSales;
    double commissionRate;
};
#endif // COMISSION_H
