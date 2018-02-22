#include<iostream>
#include<string>

using namespace std;

//Gradebook class definition
class GradeBook{

/*public:
    void displayMessage(){
        cout<<"Welcome to the Grade book!"<<endl;
    }
    */

public:
    void displayMessage(string courseName){
        cout<<"Welcome to the grade book for\n"<<courseName<<" !"<<endl;
    }
};

int main(){
    /*GradeBook myGradeBook;
    myGradeBook.displayMessage();*/
    string nameOfCourse;
    GradeBook myGradeBook;

    cout<<"Please enter the course name: "<<endl;
    getline(cin,nameOfCourse); //read a course name with blanks.
    cout<<endl; //output a blank line.

    myGradeBook.displayMessage(nameOfCourse);
}
