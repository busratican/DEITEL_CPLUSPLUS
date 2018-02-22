#include<iostream>

using namespace std;


int square(int x){
    cout<<"Square of an integer "<<x<<" is ";
    return x*x;
}

double square(double y){
    cout<<"Square of a double "<<y<<" is ";
    return y*y;
}

int main(){
    cout<<square(7); //calls int version of function.
    cout<<endl;

    cout<<square(7.5); //calls double version of function.
    cout<<endl;
}
