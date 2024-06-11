#include <iostream>

class Base {
public:
    virtual void fun() = 0;
};

class Derived: public Base {
public:
    void fun() override {
        std::cout << "From derived!" << std::endl;
    }
};

int main(void) {
    Derived* derived_instance = new Derived();
    derived_instance->fun();
    delete derived_instance;

    return 0;
}
