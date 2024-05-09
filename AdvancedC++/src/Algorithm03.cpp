#include "../shared/Print.cpp"
#include <vector>


static void Disp(
	std::vector<std::string>& vector,
	const std::string& label = "") {

	Print("{}: ", label);

	if (vector.empty()) {
		Print("[empty]");
	}
	else {
		for (auto& s : vector) {
			Print("{} ", s);
		}
	}
	Print("\n");
}

template <typename T>
void swap(T& a, T& b) {
	Print("::sawp\n");
	T temp(std::move(a));
	a = std::move(b);
	b = std::move(temp);
}

static void Algorithm03() {

	std::vector<std::string> v1{ "one", "two", "three", "four", "five" };
	std::vector<std::string> v2{ "six", "seven", "eight", "nine", "ten" };

	Disp(v1, "v1");
	Disp(v2, "v2");

	::swap(v1, v2);

	Disp(v1, "v1");
	Disp(v2, "v2");
}