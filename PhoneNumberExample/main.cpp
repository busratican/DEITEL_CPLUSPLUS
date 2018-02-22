#include <iostream>
#include "PhoneNumber.h"

using namespace std;

int main()
{

    PhoneNumber phone;

    cin >> phone;
    //cin >> phone invokes operator >> by imlicitly issuing the global function call operator>>(cin,phone).

    cout<<"The phone number entered was: ";

      //ccout << phone invokes operator << by imlicitly issuing the global function call operator<<(cout,phone).
    cout<<phone<<endl;
}
