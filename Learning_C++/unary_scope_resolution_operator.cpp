#include<iostream>

using namespace std;

int number = 7; // global variable.

int main(){
    double number = 10.5; //local number.

    //display the local and gloabal variables named number.
    cout<<"Local double value of number = "<<number<<" \nGlobal int value of number = "<<::number<<endl; // :: -> unary scope resolution operator!!!
}
