#include<iostream>
#include"Gradebook.h"

using namespace std;

int main(){
    Gradebook gr1("CSE Int comp Eng.");
    Gradebook gr2("CSS Socket Prog. Intro.");

    cout<<"Course 1: "<<gr1.getCourseName()<<"\nCourse 2: "<<gr2.getCourseName()<<endl;
}
