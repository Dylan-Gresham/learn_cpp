#include <iostream>
#include <ostream>

int main(void) {
    int x = 14; // Declare x with the value 14.
    int* pointer = &x; // Declare pointer pointing to x.

    std::cout << "x is at 0x" << &x << " and has the value " << x << std::endl;
    std::cout << "pointer is at 0x" << &pointer << " and has the value " << pointer << std::endl;
    std::cout << "pointer points to the variable x which has the value " << *pointer << std::endl;

    // Modify x through pointer
    (*pointer)++;
    std::cout << std::endl;

    std::cout << "x is at 0x" << &x << " and has the value " << x << std::endl;
    std::cout << "pointer is at 0x" << &pointer << " and has the value " << pointer << std::endl;
    std::cout << "pointer points to the variable x which has the value " << *pointer << std::endl;

    return 0;
}
