#ifndef CPL_INTWRAPPER_HPP
#define CPL_INTWRAPPER_HPP

// Needed for std::ostream
#include <ostream>

class IntWrapper {
public:

    // Constructor
    IntWrapper(int value);

    // Implicit constructors:
    //  - No default constructor (since we have a custom constructor)
    //  - Implicit copy constructor (copies value_ which is fine)

    // Getter is const because is doesn't need to modify this
    int value() const;

    // Calculate the absolute value
    IntWrapper abs() const;

    // Allow assigning from int. This allows us to write something like
    // auto iw = IntWrapper(10);
    // iw = 42;
    // assert(iw.value() == 42);
    IntWrapper& operator=(int rhs);

private:

    int value_;
};

// Allow printing to ostream
std::ostream& operator<<(std::ostream& os, const IntWrapper& iw);

// Overload some arithmetic operators
// Binary +
IntWrapper operator+(const IntWrapper& lhs, const IntWrapper& rhs);
// Unary -
IntWrapper operator-(const IntWrapper& iw);

#endif
