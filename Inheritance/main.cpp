#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
using namespace std;

int main()
{
    //instantiate a CommissionEmployee object.
    CommissionEmployee employee("Sue","Jones","222-22-2222",10000,.06);

    //set floating-point output formatting.
    cout<<fixed<<setprecision(2);

    //get commission employee data
    cout<<"Employee information obtained by get functions: \n"
        <<"\nFirst name: "<<employee.getFirstName()
        <<"\nLast name: "<<employee.getLastName()
        <<"\nSocial security number: "<<employee.getSSN()
        <<"\nGross sales: "<<employee.getGrossSales()
        <<"\nCommission rate: "<<employee.getCommissionRate()<<endl;

        employee.setGrossSales(8000);
        employee.setCommissionRate(.1);

        cout<<"\nUpdated employee information output by print function: \n"
            <<endl;

        employee.print();

        cout<<"\n\nEmployee's earnings: $"<<employee.earnings()<<endl;
}
