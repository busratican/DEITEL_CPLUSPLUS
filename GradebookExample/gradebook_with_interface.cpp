#include "Gradebook_interface.h"
#include <iostream>

using namespace std;

Gradebook::Gradebook(string name){
    setCourseName(name);
}

void Gradebook::setCourseName(string name){
    courseName = name;
}

string Gradebook::getCourseName(){
    return courseName;
}

void Gradebook::displayMessage(){
    cout<<"Welcome to the grade book for course: "<<getCourseName()<<"!"<<endl;
}


