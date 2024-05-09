#pragma once

#include <string>

class Num {
private:
	int Value{ 0 };
public:
	Num(int x = 0);
	int get_value() const;
	void set_value(int x);
	explicit operator int() const;
	explicit operator std::string() const;
	Num& operator ++(); // PreIncrement
	Num& operator --(); // PreDecrement
	Num operator ++(int); // PostIncrement / (int) > Postfix
	Num operator --(int); // PostDecrement / (int) > Postfix
};

