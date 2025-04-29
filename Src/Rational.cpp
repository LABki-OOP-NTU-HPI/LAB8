#include "../Include/Rational.h"

int Rational::gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Rational::Rational(int num, int den) {
    if (den == 0) {
        throw invalid_argument("Denominator cannot be zero.");
    }

    int g = gcd(num, den);
    numerator = num / g;
    denominator = den / g;
}

double Rational::getValue() const
{
    return static_cast<double>(numerator) / denominator;
}

void Rational::print() const
{
    cout << "Rational: " << numerator << "/" << denominator << endl;
}