#include "IntWrapper.hpp"

// Needed for std::cout
#include <iostream>

int main() {
    auto iw1 = IntWrapper(42);

    // Fundamental type can be streamed using the operator<< overload in the
    // standard library.
    std::cout << "iw1.value(): " << iw1.value() << "\n";

    // We can stream an IntWrapper directly due to our custom overload:
    std::cout << "iw1: " << iw1 << "\n";

    // We overloaded assignment from integers
    iw1 = 100;
    std::cout << "iw1 after assignment: " << iw1 << "\n";

    // Try absolute value calculation
    auto iw2 = IntWrapper(-25);
    std::cout << "iw2: " << iw2 << ", iw2.abs(): " << iw2.abs() << "\n";

    // And we overloaded some arithmetic operation
    auto result = -(iw1 + iw2);
    std::cout << "-(iw1 + iw2): " << result << "\n";
}
