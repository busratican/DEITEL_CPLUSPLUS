class Implementation;

class Interface {

public:
    Interface(int); //constructor.
    void setValue(int); //same public interface as class implementation has.
    int getValue() const; //same public interface as class implementation has.
    ~Interface(); //destructor

private:
    //requires previous forward declaration
    Implementation *ptr;
};
