#include "iostream"
#include "Include/Decimal.h"
#include "Include/Number.h"
#include "Include/Rational.h"

int main()
{
    Number* numbers[4];

    numbers[0] = new Rational(4, 6);
    numbers[1] = new Decimal(3.14);
    numbers[2] = new Rational(10, -5);
    numbers[3] = new Decimal(5.23456789);

    for (int i = 0; i < 4; ++i) {
        numbers[i]->print();
        cout << "Value as double: " << numbers[i]->getValue() << "\n";
    }

    for (int i = 0; i < 4; ++i)
        delete numbers[i];

    return 0;
}
