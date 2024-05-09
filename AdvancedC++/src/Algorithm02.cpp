#include "../shared/Print.cpp"

class MultBy {
private:
	int Value{ 0 };
public:
	MultBy(int x = 0) : Value(x) {}
	int operator () (int x) const { return Value * x; } // Functors
};

static void Algorithm02() {
	const MultBy times4(4);
	const MultBy times10(10);
	const MultBy times15(15);

	Print("times4(5) is {}\n", times4(5));
	Print("times4(15) is {}\n", times4(15));
	Print("times10(5) is {}\n", times10(5));
	Print("times10(15) is {}\n", times10(15));
	Print("times15(5) is {}\n", times15(5));
	Print("times15(15) is {}\n", times15(15));

	auto _times15 = [](int x) {return 15 * x; };

	Print("times15(15) is {}\n", _times15(15));
}