#include<iostream>
using namespace std;


int main(){
    int x = 3;
    int &y = x; // y refers to (is an alias for) x.

    /*int &y; -->Error:y must be initialized!!*/
    //attending one alias for more variable is an error!!!


    cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
    y=7; //actual modifies x.
    cout<<"x = "<<x<<endl<<"y = "<<y<<endl;

}
