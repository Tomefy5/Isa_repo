#ifndef COMPLEXE_RATIO_H
#define COMPLEXE_RATIO_H
#include <iostream>
#include "ratio.h"

using namespace Isa::Rational;

namespace Isa
{
    namespace ComplexeRational
    {
        class ComplexRatio
        {
        private:
            Ratio real;
            Ratio imaginary;

        public:
            ComplexRatio(Ratio r = Ratio(), Ratio i = Ratio());
            void showComplexRatio();
        };
    }
}

#endif