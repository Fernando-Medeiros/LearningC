#include "../shared/Print.cpp"
#include<algorithm>;
#include<string>;
#include<vector>;

using std::vector, std::string;

static void Algorithm07() {
	vector<unsigned char> vector01{ 1, 2, 3, 4, 5, 6 ,7 ,8, 9 ,10 };
	vector<unsigned char> vector02{ };
	string text01{ "the red rat eat the hat of the rat red!" };
	string text02{};
	string text03{};

	// predicate
	auto IS_DIV_4 = [](int n) -> bool {return n % 4 == 0; };


	// operator
	auto TO_UPPER_CHAR = [](char c) -> char {
		return (c >= 'a' && c <= 'z') ? c - ('a' - 'A') : c; };
	// operator
	auto CONCAT = [](auto& e) -> string {
		string out{ "" };
		for (auto& element : e) out += std::format("{}:", element);
		return out; };
	// operator
	auto TO_TITLE = [&TO_UPPER_CHAR](char c) -> char {
		static char prevChar{ ' ' };
		char newChar{ prevChar == ' ' ? TO_UPPER_CHAR(c) : c };
		prevChar = c;
		return newChar;
		};


	// count div for 4 in vector01
	auto count = std::count_if(vector01.begin(), vector01.end(), IS_DIV_4);

	// copy div for 4 in vector01 to vector02
	std::copy_if(vector01.begin(), vector01.end(), std::back_inserter(vector02), IS_DIV_4);

	// transform char to upper case and insert in text02
	std::transform(text01.begin(), text01.end(), std::back_inserter(text02), TO_UPPER_CHAR);

	// transform to title
	std::transform(text01.begin(), text01.end(), std::back_inserter(text03), TO_TITLE);

	Print("vector 01 size = {}, vector 01 div for 4 = {}\n", vector01.size(), count);
	Print("vector 01 = {}\n", CONCAT(vector01));
	Print("vector 02 = {}\n", CONCAT(vector02));
	Print("text 01 = {}\n", text01);
	Print("text 02 = {}\n", text02);
	Print("text 03 = {}\n", text03);
}