#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
    Time t;

    t.setHour(18).setMinute(30).setSecond(22); //cascade function calls.
    cout<<"Universal time: ";
    t.printUniversal();


    cout<<"\nStandart time: ";
    t.printStandart();

    cout<<"\n\n standart time: ";

    t.setTime(20,20,20).printStandart(); //cascade function calls.
    cout<<endl;

}
