#ifndef ARRAY_H
#define ARRAY_H

#include<iostream>
using namespace std;

class Array{

friend ostream &operator << (ostream &, const Array &);
friend istream &operator >> (istream &, Array &);

public:
    explicit Array(int = 10); //default constructor.
    Array(const Array &); //copy constructor
    ~Array(); //destructor
    int getSize() const; //return size

    const Array &operator = (const Array &); // assignment operator.
    bool operator == (const Array &) const; //equality.

    //inequality operator; returns opposite of == operator
    bool operator != (const Array &right) const {
     return ! (*this == right); //invokes Array::operator ==
    }

    int &operator [](int);
    int operator [] (int) const;

private:
    int size;
    int *ptr;
};
#endif // ARRAY_H
