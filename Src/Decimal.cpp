#include "../Include/Decimal.h"

Decimal::Decimal(double v)
        : value(v) {}
double Decimal::getValue() const
{
        return value;
}
void Decimal::print() const
{
        cout << "Decimal: " << value << endl;
}