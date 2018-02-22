#include<iostream>
using namespace std;

class Count{
    friend void setX(Count &, int);
public:
    Count():x(0) //initialize x to 0.
    {
        //empty body.
    }

    void print() const {
        cout<<x<<endl;
    }

private:
    int x;
};

//function setX can modify private data of Count.Because setX is declared as a friend of count.

void setX(Count &c, int val){
    c.x = val;
}


int main(){
    Count counter;
    cout<<  "Counter x after instantiation: ";
    counter.print();

    setX(counter,8);
    cout<<"\nCounter x after call to setX friend function: ";
    counter.print();
}
