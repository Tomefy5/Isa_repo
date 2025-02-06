#include <iostream>
#include <string>
#include "ratio.h"

using namespace std;
using namespace Isa::Rational;

Ratio::Ratio(int p, int q)
{
    if (q == 0)
    {
        cout << " Denominator can't be null " << endl;
        exit(0);
    };

    int divisor = pgcd(p, q);

    numerator = p / divisor;
    denominator = q / divisor;
}


void Ratio::showRatio()
{
    cout << numerator << " / " << denominator;
}

Ratio Ratio::operator+(Ratio otherRatio)
{
    int num = numerator * otherRatio.denominator + otherRatio.numerator * denominator;
    int den = otherRatio.denominator * denominator;
    return Ratio(num, den);
}

Ratio Ratio::operator-(Ratio otherRatio)
{
    int num = numerator * otherRatio.denominator - otherRatio.numerator * denominator;
    int den = otherRatio.denominator * denominator;
    return Ratio(num, den);
}

Ratio Ratio::operator/(Ratio otherRatio)
{
    int num = numerator * otherRatio.denominator;
    int den = denominator * otherRatio.numerator;
    return Ratio(num, den);
}

Ratio Ratio::operator*(Ratio otherRatio)
{
    int num = numerator * otherRatio.numerator;
    int den = denominator * otherRatio.denominator;
    return Ratio(num, den);
}
