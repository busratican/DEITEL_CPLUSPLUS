#include<iostream>
using namespace std;

int squareByValue(int); //function prototype (value pass)
void squareByReference(int &); //function prototype (reference pass)

int main(){

    int x=2,z=4;

    cout<<"x= "<<x<<" before square by value\n";
    cout<<"Value returned by square by value: "<<squareByValue(x)<<endl;
    cout<<"x= "<<x<<" after square by value\n"<<endl;


    cout<<"z= "<<z<<" before square by reference"<<endl;
    squareByReference(z);
    cout<<"z= "<<z<<" after square by reference"<<endl;
}

int squareByValue(int number){
return number *= number;
}

void squareByReference(int &numberRf){
    numberRf *= numberRf;
}
