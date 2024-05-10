#include "../shared/Print.cpp"

template< class T>
class AbstractValueObject {
protected:
	T value{};
public:
	T Get()const { return value; }
	void virtual Set(T x) { }
};

class Day : public AbstractValueObject<unsigned char> {
public:
	Day(unsigned char x) {
		Set(x);
	}
	void virtual Set(unsigned char x) override {
		value = x >= 1 && x <= 31 ? x : 01;
	}
};
class Month : public AbstractValueObject<unsigned char> {
public:
	Month(unsigned char x) {
		Set(x);
	}
	void virtual Set(unsigned char x) override {
		value = x >= 1 && x <= 12 ? x : 01;
	}
};
class Year : public AbstractValueObject<unsigned short> {
public:
	Year(unsigned short x) {
		Set(x);
	}
	void virtual Set(unsigned short x) override {
		value = x >= 1 && x <= 9999 ? x : 1999;
	}
};

class Date {
public:
	Day day;
	Month month;
	Year year;
	Date(
	) : day(1), month(1), year(2024) {
	};
	Date(
		unsigned char d,
		unsigned char m,
		unsigned short y
	) : day(d), month(m), year(y) {
	};
	Date(
		Day const& d,
		Month const& m,
		Year const& y
	) : day(d), month(m), year(y) {
	};
	std::string str()const {
		return std::format("{}/{}/{}", day.Get(), month.Get(), year.Get());
	};
};


static void Algorithm05() {
	auto date00 = Date();
	auto date01 = Date(15, 03, 99999);
	auto date02 = Date(Day(15), Month(03), Year(-1));

	Print("Date 00 is {}\n", date00.str());
	Print("Date 01 is {}\n", date01.str());
	Print("Date 02 is {}\n", date02.str());
}
