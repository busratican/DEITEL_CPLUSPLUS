#include <iostream>
#include<iomanip>
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
    //create base class object.
    CommissionEmployee commissionEmp ("Sue", "Jones","222-22-2222",10000,.06);

    //create base class pointer
    CommissionEmployee *commissionEmpPtr = 0;

    //create derived class object.
    BasePlusCommissionEmployee basePlusCommissionEmp ("Bob","Lewis","333-33-3333",5000,.04,300);

    //create derived class pointer
    BasePlusCommissionEmployee *basePlusCommissionEmpPtr = 0;

    //set floating-point output formatting
    cout<<fixed<<setprecision(2);


    //output objects commissionEmployee and basepluscommissionemployee
    cout<<"Print base-class and derived-class objects:\n\n\n";
    commissionEmp.print();//invokes base class print.
    cout<<"\n\n";
    basePlusCommissionEmp.print(); //invokes derived class print


    //aim base-class pointer at base-class object and print.
    commissionEmpPtr = &commissionEmp; //perfectly natural.
    cout<<"\n\n\nCalling print with base class pointer to "
        <<"\nbase class object invokes base class print function:\n\n";
    commissionEmpPtr->print();

    //aim derived-class pointer at derived-class object and print.
    basePlusCommissionEmpPtr = &basePlusCommissionEmp; //perfectly natural.
    cout<<"\n\n\nCalling print with derived class pointer to "
        <<"\nderived class object invokes derived class print function:\n\n";
    basePlusCommissionEmpPtr->print();


    //aim base-class pointer at derived class object and print.
    commissionEmpPtr = &basePlusCommissionEmp;
    cout<<"\n\n\nCalling print with base class pointer to "
        <<"\nderived class object\n invokes base class print "
        <<"function on that derived-class object:\n\n";
        commissionEmpPtr->print(); //invokes derived-class print.
        cout <<endl;

        //ÖNEMLÝ!!!! -> virtual keyword kullanmamýz son satýrda base class pointer ile derived class print() fonk. ulaþmamýzý saðladý.
        //virtual heywordünü kaldýrdýðýmýzda bu print bizi base class print() fonk. götürecek ve onu çalýþtýracak.POLYMORPHISM.
}
