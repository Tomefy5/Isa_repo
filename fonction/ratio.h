#ifndef RATIO_H
#define RATIO_H
#include <iostream>

using namespace std;

namespace Isa
{
    namespace Rational
    {
        class Ratio
        {
        private:
            int numerator, denominator;

            int pgcd(int a, int b) { return (b == 0) ? a : pgcd(b, a % b); }

        public:
            Ratio(int p = 0, int q = 1);
            void showRatio();
            Ratio operator+(Ratio otherRatio);
            Ratio operator-(Ratio otherRatio);
            Ratio operator/(Ratio otherRatio);
            Ratio operator*(Ratio otherRatio);
        };
    }
}

#endif