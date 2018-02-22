#include "Interface.h"
#include "Implementation.h"


//constructor
Interface::Interface(int v) : ptr(new Implementation(v))
{}

void Interface::setValue(int v){
    ptr->setValue(v);
}

int Interface::getValue() const {
    return ptr->getValue();
}

//destructor
Interface::~Interface(){
    delete ptr;
}
