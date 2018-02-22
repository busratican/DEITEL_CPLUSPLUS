#include <iostream>
#include "Array.h"

using namespace std;

void outputArray(const Array &); //prototype.

int main()
{
    Array integers1(7);
    outputArray(integers1);
    outputArray(Array(3));
    Array integers2;

    cout<< "Size of Array integers1 is "<<integers1.getSize()<<"\nArray after initialization:\n"<<integers1;
    cout<< "Size of Array integers2 is "<<integers2.getSize()<<"\nArray after initialization:\n"<<integers2;

    //input and print integers1 and integers2
    cout<<"\nEnter 17 integers:"<<endl;
    cin>>integers1>>integers2;

    cout<<"\nAfter input, the Arrays contain:\n"<<"integers1:\n"<<integers1<<"integers2: "<<integers2;

    //use overload inequality (!=) operator
    cout<<"\nEvaluating: integers1 != integers2"<<endl;

    if(integers1 != integers2)
        cout<<"integers1 and integers2 are not equal"<<endl;

    //create integers3 using integers1 as an initializer;print size and contents.
    Array integers3(integers1);

    cout<<"\nSize of Array integers3 is "<<integers3.getSize()<<"\nArray after initialization:\n"<<integers3;

    //overloaded assignment operator (=)
    cout<<"\nAssigning integers2 to integers1:"<<endl;
    integers1=integers2;

    cout<<"integers1:\n"<<integers1<<"integers2:\n"<<integers2;

    cout<<"\nEvaulating: integers1 == integers2"<<endl;

    if(integers1 == integers2)
    cout<<"\nintegers1 and integers2 are equal"<<endl;

    cout<<"\nintegers1[5] is "<<integers1[5];

    cout<<"\n\nAssigning 1000 to integers1[5]"<<endl;
    integers1[5]=1000;
    cout<<"integers1:\n"<<integers1;

    cout<<"\nAttempt to assign 1000 to integers1[15]"<<endl;
    integers1[15]=1000; //ERROR
}

void outputArray(const Array &arrayToOutput){
    cout<<"The array recieved has "<<arrayToOutput.getSize()<<" elements. The constants are:\n"
    <<arrayToOutput<<endl;
}
