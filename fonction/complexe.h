#ifndef COMPLEXE_H
#define COMPLEXE_H
#include <iostream>

namespace Isa
{
    namespace Complexe
    {
        class Complex
        {
        private:
            double real, imaginary;

        public:
            Complex(double r, double i);
            void showComplex();
            Complex operator+(Complex otherComplex);
            Complex operator-(Complex otherComplex);
            Complex operator*(Complex otherComplex);
            Complex operator/(Complex otherComplex);
        };
    }
}

#endif