#include "Algebra.h"

namespace gmath
{
    double Algebra::abs(double a)
    {
        if (a < 0) a = -a; 
        
        return a;
    }

    double Algebra::pow(double base, int exponent)
    {   
        if (exponent < 0) 
        {
            base = 1 / base;
            exponent = -exponent; 
        }

        double result = 1;
        for (int i = 0; i < exponent; i++)
        {
            result *= base;
        }

        return result;
    }

    double Algebra::sqrt(double a)
    {   
        if (a < 0) a = -a; // if a is negative, make it positive

        double x = a / 2; // initial guess
        double tolerance = 1e-6; // 
        double difference; // store difference between old guess (x) and the new guess (newX)
        
        do
        {
            double newX = 0.5 * (x + a / x );
            difference = abs(newX - x); 
            x = newX;


        } while (difference > tolerance);

        return x;
        

    }
}