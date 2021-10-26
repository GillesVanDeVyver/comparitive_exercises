#include "IntWrapper.hpp"

// Needed for std::ostream
#include <ostream>

// Needed for std::abs
#include <cmath>

IntWrapper::IntWrapper(int value)
    : value_(value) // Always initialize members in this "initializer list"
{
}

int IntWrapper::value() const {
    return value_;
}

IntWrapper IntWrapper::abs() const {
    return IntWrapper(std::abs(value_));
}

IntWrapper& IntWrapper::operator=(int rhs) {
    value_ = rhs;

    // We return a reference to this to allow assignment chaining:
    // i1 = i2 = i3;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const IntWrapper& iw) {
    // Simply stream the underlying value.
    // Note that we have to return a reference to os to allow chaining:
    // os << iw << 100 << "hello";
    return os << iw.value();
}

IntWrapper operator+(const IntWrapper& lhs, const IntWrapper& rhs) {
    return IntWrapper(lhs.value() + rhs.value());
}

IntWrapper operator-(const IntWrapper& iw) {
    return IntWrapper(-iw.value());
}
