#include "Foo.hpp"

Foo::Foo(double v) : foo_(v)
{
    // constructor
}

double Foo::doubleValue()
{
    return 2 * foo_;
}