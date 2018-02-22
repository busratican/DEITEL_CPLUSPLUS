#include<iostream>
#include "maximum.h" //include definition of function template maximum.
using namespace std;

int main(){

int int1,int2,int3;

cout<<"Input three integer values: ";
cin>>int1>>int2>>int3;

cout<<"The maximum integer value is: "<<maximum(int1,int2,int3);


double db1,db2,db3;

cout<<"\n\nInput three double values: ";
cin>>db1>>db2>>db3;

cout<<"The maximum double value is: "<<maximum(db1,db2,db3);

char ch1,ch2,ch3;
cout<<"\n\nInput three characters: ";
cin>>ch1>>ch2>>ch3;

cout<<"The maximum character value is: "<<maximum(ch1,ch2,ch3)<<endl;


}
