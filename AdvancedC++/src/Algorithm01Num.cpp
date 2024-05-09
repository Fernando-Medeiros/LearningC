#include "Algorithm01Num.h"

Num::Num(int x) : Value(x) {}

int Num::get_value() const { return Value; }

void Num::set_value(int x) { Value = x; }

Num::operator int() const
{
	return Value;
}

Num::operator std::string() const
{
	return std::to_string(get_value());
}

Num& Num::operator++()
{
	Value += 1;
	return *this;
}
Num& Num::operator--()
{
	Value -= 1;
	return *this;
}
Num Num::operator++(int)
{
	auto temp = *this;
	Value += 1;
	return temp;
}
Num Num::operator--(int)
{
	auto temp = *this;
	Value -= 1;
	return temp;
}