#ifndef ARITHMETIC_H
#define ARITHMETIC_H

namespace gmath
{
    class Arithmetic
    {
    public:
        static double add(double a, double b);
        static double subtract(double a, double b);
        static double multiply(double a, double b);
        static double divide(double a, double b);

        static int mod(int a, int b);
    };
}

#endif