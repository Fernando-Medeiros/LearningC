#include "../shared/Print.cpp"
#include<optional>

using std::string, std::optional;

enum class BookType : unsigned char { Fantasy, History, Romance, Triller };

struct Book
{
	string name{};
	BookType type{};
	optional<string> description{ "" };
	optional<unsigned short> amount{ 0 };
};


// default return {false} 
static optional<int> try_mod(int x, int y) {
	if (x % y == 0) return static_cast<int>(x % y);
	return {};
}

// OPTIONAL
static void Algorithm10() {
	int left = 6, right = 2;
	auto result = try_mod(left, right);

	if (result.has_value())
		Print("Mod {} % {} = {}\n", left, right, result.value());
	if (result)
		Print("Mod {} % {} = {}\n", left, right, *result);

	auto book = Book("Lord of the rings", BookType::Fantasy);

	Print("{} - {} ?? {} - {}\n", book.name, (int)book.type, *book.description, *book.amount);
}