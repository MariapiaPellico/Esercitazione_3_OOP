#include "ComplexNumber.hpp"

namespace ComplexNumberLibrary{
ComplexNumber ComplexNumber::to_conjugate()
{
    ComplexNumber c(real,-imag);
    return c;
}

ostream& operator<<(ostream& os, const ComplexNumber &c)
{
    if(c.imag == -1)
        os<<c.real<<"-i";
    else if(c.imag < 0 && c.imag != -1)
        os<<c.real<<c.imag<<"i";
    else if (c.imag == 0)
        os<<c.real;
    else if (c.imag == 1)
        os<<c.real<<"+i";
    else
        os<<c.real<<"+"<<c.imag<<"i";
    return os;
}

ComplexNumber operator+(const ComplexNumber &c1, const ComplexNumber &c2)
{
    ComplexNumber c(c1.real+c2.real, c1.imag+c2.imag);
    return c;
}

bool operator==(const ComplexNumber &c1, const ComplexNumber &c2)
{
    if ((abs(c1.real - c2.real) < 1e-14) && ((abs(c1.imag - c2.imag) < 1e-14)))
        return true;
    else
        return false;
}

}
