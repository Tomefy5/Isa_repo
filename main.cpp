#include <iostream>
#include <string>
#include "./fonction/ratio.h"
#include "./fonction/complexe.h"
#include "./fonction/complexeRatio.h"

using namespace std;
using namespace Isa::Rational;
using namespace Isa::Complexe;
using namespace Isa::ComplexeRational;

int main()
{
    Ratio r1(62, 10);
    Ratio r2(4, 5);
    Ratio r3(75, 13);
    Complex c1(12, 5);
    Complex c2(7, 4);
    ComplexRatio cr1(r3, r1);

    Complex sum = c1 + c2;

    // cout << "Ratio 1: ";
    // r1.showRatio();
    // cout << "Ratio 2: ";
    // r2.showRatio();
    // cout << "Sum R1 and R2: ";
    // sum.showRatio();

    // cout << "Complex 1: ";
    // c1.showComplex();
    // cout << "Complex 2: ";
    // c2.showComplex();
    // cout << "Sum C1 and C2: ";
    // sum.showComplex();

    cr1.showComplexRatio();

    return 0;
}