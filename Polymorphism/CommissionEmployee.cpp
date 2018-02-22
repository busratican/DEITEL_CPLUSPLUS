#include<iostream>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn,
                                       double sales,double rate)
                                       :firstName(first),lastName(last),SSN(ssn)
        {
            setGrossSales(sales);
            setComissionRate(rate);
        }

void CommissionEmployee::setFirstName(const string &first)
{
    firstName = first;
}

string CommissionEmployee::getFirstName() const
{
    return firstName;
}

void CommissionEmployee::setLastName(const string &last)
{
    lastName = last;
}

string CommissionEmployee::getLastName() const
{
    return lastName;
}

void CommissionEmployee::setSSN(const string &ssn)
 {
     SSN=ssn;
 }

 string CommissionEmployee::getSSN() const
 {
     return SSN;
 }

 void CommissionEmployee::setComissionRate(double rate)
 {
     commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
 }

 double CommissionEmployee::getCommissionRate() const
 {
     return commissionRate;
 }

 void CommissionEmployee::setGrossSales(double sales)
 {
     grossSales = (sales > 0.0) ? sales : 0.0;
 }

 double CommissionEmployee::getGrossSales() const
 {
     return grossSales;
 }

 double CommissionEmployee::earnings() const
 {
     return getCommissionRate() * getGrossSales() ;
 }

 void CommissionEmployee::print() const
 {
     cout<<"COMMISSION EMPLOYEE: "
         <<getFirstName()<<' '<<getLastName()
         <<"\nSSN: "<<getSSN()
         <<"\nGross Sales: "<<getGrossSales()
         <<"\nCommission Rate: "<<getCommissionRate();

 }
