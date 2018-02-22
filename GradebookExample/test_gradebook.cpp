#include<iostream>
#include "..\Gradebook_interface.h"

using namespace std;

int main(){
    Gradebook gradeBook1("CS101 Introduction to Computer Programming!");

    cout<<"gradeBook1 created for course: "<<gradeBook1.getCourseName()<<endl;
}
