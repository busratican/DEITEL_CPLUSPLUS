#include<iostream>
#include<string>

using namespace std;

class Gradebook{

private:
    string courseName;

public:
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
    string nameOfCourse;
    Gradebook myGradeBook;

    cout<<"Initial course name is: "<<myGradeBook.getCourseName()<<endl;

    cout<<"\nPlease enter the course name: "<<endl;
    getline(cin,nameOfCourse);
    myGradeBook.setCourseName(nameOfCourse);

    cout<<endl;
    myGradeBook.displayMessage();
}
