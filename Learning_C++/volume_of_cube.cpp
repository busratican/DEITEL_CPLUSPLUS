#include<iostream>
using std::cout;
using std::cin;
using std::endl;

/*Definition of inline function cube.Definition function appears before function is called.So function
prototype is not required.*/

inline double cube(const double side){
    return side*side*side;
}
int main(){
    double side_val;

    for(int i=1; i<=3; i++){
        cout<<"\nEnter the side length of cube: ";
        cin>>side_val;

        cout<<"Volume of cube with side "<<side_val<< " is "<<cube(side_val)<<endl;
    }

}
