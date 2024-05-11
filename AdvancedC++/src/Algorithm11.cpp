#include "../shared/Print.cpp"
#include<any>
#include<vector>

static void printAny(const std::any& x) {
	if (x.has_value() == false) Print("[empty][{}]\n", x.type().name());

	else if (x.type() == typeid(int)) {
		auto num = std::any_cast<int>(x);
		Print("num: {}\n", num);
	}
	else if (x.type() == typeid(std::string)) {
		auto str = std::any_cast<std::string>(x);
		Print("str: {}\n", str);
	}
	else if (x.type() == typeid(std::vector<int>)) {
		auto vec = std::any_cast<const std::vector<int>>(x);
		Print("vec: {}\n", vec.size());
	}
}

// ANY
static void Algorithm11() {
	printAny(573);
	printAny(std::string{ "Hello World!" });
	printAny(std::vector<int>{88, 113, 314, 678, 1361});
}