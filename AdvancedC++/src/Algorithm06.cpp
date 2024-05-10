#include "../shared/Print.cpp"

// LAMBDA
static void Algorithm06() {
	const unsigned char age = 25;
	const std::string name = "Mike";
	const std::string welcome = "Hello";

	auto sum = [](float x, float y)-> float {return x + y; };
	auto sub = [](float x, float y) {return x - y; };
	auto div = [](float x, float y) {return x / y; };
	auto mul = [](float x, float y) {return x * y; };
	auto exp = [](float x, float y) {return std::pow(x, y); };
	auto mod = [](int x, int y) {return x % y; };

	auto a = [welcome, name] { Print("{} {}!\n", welcome, name); }; // copy args
	auto d = [&welcome] { Print("{}\n", welcome); }; // reference args
	auto b = [=] { Print("{}, {} years old\n", name, age); }; // copy all
	auto c = [&] { Print("{}\n", age); }; // reference all

	Print("sum 10 + 10 = {}\n", sum(10, 10));
	Print("sub 10 - 10 = {}\n", sub(10, 10));
	Print("div 10 / 10 = {}\n", div(10, 10));
	Print("mul 10 * 10 = {}\n", mul(10, 10));
	Print("mul 10 ** 10 = {}\n", exp(10, 10));
	Print("mod 10 % 10 = {}\n", mod(10, 10));

	a(), b(), c(), d();
}