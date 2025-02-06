#include <iostream>
#include <string>
#include "complexe.h"

using namespace std;
using namespace Isa::Complexe;

Complex::Complex(double r, double i)
{
    real = r;
    imaginary = i;
}

void Complex::showComplex()
{
    cout << real << " + " << imaginary << "i" << endl;
}

Complex Complex::operator+(Complex otherComplex)
{
    return Complex(real + otherComplex.real, imaginary + otherComplex.imaginary);
}

Complex Complex::operator-(Complex otherComplex)
{
    return Complex(real - otherComplex.real, imaginary - otherComplex.imaginary);
}

Complex Complex::operator*(Complex otherComplex)
{
    return Complex(real * otherComplex.real, imaginary * otherComplex.imaginary);
}

Complex Complex::operator/(Complex otherComplex)
{
    return Complex(real / otherComplex.real, imaginary / otherComplex.imaginary);
}
