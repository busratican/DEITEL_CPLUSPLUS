#include<iostream>
#include<string>
using namespace std;

class Gradebook{
private:
    string courseName;

public:
    Gradebook(string name){
        setCourseName(name);
    }

    void setCourseName(string name){
        courseName = name;
    }

    string getCourseName(){
        return courseName;
    }

    void displayMessage(){
    cout<<"Welcome to the grade book for\n"<<getCourseName()<<"!"<<endl;
    }
};

int main(){

    Gradebook gradebook1("CS101 Introduction to Computer Engineering.");
    Gradebook gradebook2("CS102 Data Structures in C++");

    cout<<"gradebook1 created for course: "<<gradebook1.getCourseName()<<"\ngradebook2 created for course: "<<gradebook2.getCourseName()<<endl;


}
