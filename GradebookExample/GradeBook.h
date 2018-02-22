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
        cout<<"Welcome to gradebook course for\n"<<getCourseName()<<"!"<<endl;
    }
};
