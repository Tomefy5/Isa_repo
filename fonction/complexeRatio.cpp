#include <iostream>
#include "complexeRatio.h"
#include "ratio.h"

using namespace Isa::ComplexeRational;
using namespace Isa::Rational;
using namespace std;

ComplexRatio::ComplexRatio(Ratio r, Ratio i)
{
    real = r;
    imaginary = imaginary;
}

void ComplexRatio::showComplexRatio()
{
    cout << "(";
    imaginary.showRatio();
    cout << ")";
    cout << " + ";
    cout << "(";
    real.showRatio();
    cout << ")";
    cout << "i" << endl;
}