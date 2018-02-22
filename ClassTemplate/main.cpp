#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack<double> doubleStack(5);
    double doubleValue = 1.1;

    cout<<"Pushing elements onto doubleStack\n";

    while(doubleStack.push(doubleValue))
    {
        cout<<doubleValue << ' ';
        doubleValue += 1.1;
    }

    cout<<"\nStack is full,cannot push "<<doubleValue<<"\n\nPopping elements from doubleStack\n";

    while(doubleStack.pop(doubleValue))
    {
        cout<<doubleValue<<' ';
    }

    cout<<"Stack is empty.Cannot pop\n";

    Stack<int> intStack;
    int intValue = 1;
    cout<<"\nPushing elements onto intStack\n";

    while(intStack.push(intValue))
    {
        cout<<intValue++<<' ';
    }

    cout<<"\nStack is full,cannot push "<<intValue<<"\n\nPopping elements from intStack\n";

    while(intStack.pop(intValue))
    {
        cout<<intValue<<' ';
    }

        cout<<"Stack is empty.Cannot pop\n";
}
