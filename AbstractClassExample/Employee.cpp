#include<iostream>
#include "Employee.h"
using namespace std;


Employee::Employee(const string &first, const string &last, const string &ssn)
                    :firstName(first),lastName(last),SSN(ssn)
                    {

                    }
void Employee::setFirstName(const string &first)
{
    firstName = first;
}

string Employee::getFirstName() const
{
    return firstName;
}

void Employee::setLastName(const string &last)
{
    lastName = last;
}

string Employee::getLastName() const
{
    return lastName;
}

void Employee::setSSN(const string &ssn)
{
    SSN = ssn;
}

string Employee::getSSN() const
{
    return SSN;
}

void Employee::print() const
{
    cout<<getFirstName()<<' '<<getLastName()
        <<"\nSSN: "<<getSSN();
}
