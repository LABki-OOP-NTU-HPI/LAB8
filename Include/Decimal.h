#ifndef DECIMAL_H
#define DECIMAL_H
#include "Number.h"
#include <iostream>
using namespace std;


class Decimal : public Number
{
    double value;
public:
    Decimal(double v);
    double getValue() const override;
    void print() const override;
};



#endif //DECIMAL_H
