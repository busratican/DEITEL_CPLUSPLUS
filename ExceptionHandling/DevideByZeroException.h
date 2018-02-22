#include <stdexcept> //contains runtime_error.
using namespace std;


class DivideByZeroException : public runtime_error
{
public:
    DivideByZeroException():runtime_error("attempt to divide by zero"){}
};
