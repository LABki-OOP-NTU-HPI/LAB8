#ifndef RATIONAL_H
#define RATIONAL_H
#include "Number.h"
#include <iostream>
#include <stdexcept>
#include <cmath>
using namespace std;

class Rational : public Number
{
    int numerator;
    int denominator;

    public:
    int gcd(int a, int b);
    Rational(int num, int den);
    double getValue() const override;
    void print() const override;
};



#endif //RATIONAL_H
