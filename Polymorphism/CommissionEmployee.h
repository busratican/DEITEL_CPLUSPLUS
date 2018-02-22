#ifndef COMMISSION_H
#define COMMISSION_H

#include<string>
using namespace std;


class CommissionEmployee{
public:
    CommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);

    void setFirstName(const string &); //set first name.
    string getFirstName() const; //get first name.

    void setLastName(const string &); //set last name.
    string getLastName() const; //get last name.

    void setSSN(const string &); //set SSN.
    string getSSN() const ; //get SSN.

    void setGrossSales(double); //set gross sales amount.
    double getGrossSales() const; //get gross sales amount.

    void setComissionRate(double); //set commission rate.
    double getCommissionRate() const; //get commission rate.

    virtual double earnings() const; //calculate earnings.
    virtual void print() const; //print commissionEmployee object.


private:
    string firstName;
    string lastName;
    string SSN;
    double grossSales;
    double commissionRate;
};
#endif // COMMISSION_H
