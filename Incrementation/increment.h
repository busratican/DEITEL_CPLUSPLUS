#ifndef INCREMENT_H
#define INCREMENT_H

class Increment{
public:
    Increment(int c=0,int i=1); //default constructor

    void addIncrement(){
    count+=increment;
    }

    void print() const;

private:
    int count;
    const int increment;
};
#endif // INCREMENT_H
