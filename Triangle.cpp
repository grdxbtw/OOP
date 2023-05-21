#include "Triangle.h"


std::ostream& operator<<(std::ostream& os, const Triangle& obj)
{
    os << obj.a << "\t";
    return os;
}

std::istream& operator >>(std::istream& is, Triangle& obj)
{
    is >> obj.a;

    if (is.fail())
        is.setstate(std::ios::failbit);

    return is;
}
