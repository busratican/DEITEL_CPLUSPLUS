#include<iomanip>
#include "PhoneNumber.h"
using namespace std;

//overload stream insertion operator; cannot be a member function if we would like to invoke it with cout<<somePhoneNumber;

ostream &operator <<(ostream &output, const PhoneNumber &number){
    output << "(" <<number.areaCode << ") " <<number.exchange << "-" <<number.line;
    return output;
}

//overloaded stream extraction operator; cannot be a member function if we would like to invoke it with cin >> somePhoneNumber;

istream &operator >> (istream &input, PhoneNumber &number){
    input.ignore();
    input >> setw(3) >> number.areaCode;
    input.ignore(2);
    input >> setw(3) >> number.exchange;
    input.ignore();
    input >> setw(4) >> number.line;
    return input;
}
