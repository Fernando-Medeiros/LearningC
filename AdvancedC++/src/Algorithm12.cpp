#include "../shared/Print.cpp"
#include<variant>
#include<vector>

class Animal {
	std::string_view name;
	std::string_view sound;
public:
	Animal(std::string_view n, std::string_view s)
		: name(n), sound(s) {}
	void speak()const {
		Print("{} says {}\n", name, sound);
	}
};

class Cat : public Animal {
public:
	Cat(std::string_view n) : Animal(n, "i'm angry") {}
};

class Dog : public Animal {
public:
	Dog(std::string_view n) : Animal(n, "what's up?") {}
};

class Bear : public Animal {
public:
	Bear(std::string_view n) : Animal(n, "monday? oh nooh") {}
};

// VARIANT
using Animals = std::variant<Cat, Dog, Bear>;

static void Algorithm12() {
	std::vector<Animals> pets{ Cat("Saturday"), Dog("Bob"), Bear("Antonio") };

	Print("get\n");
	for (const Animals& pet : pets) {
		switch (pet.index()) {
		case 0: get<Cat>(pet).speak(); break;
		case 1: get<Dog>(pet).speak(); break;
		case 2: get<Bear>(pet).speak(); break;
		default:break;
		}
	}

	Print("get_if\n");
	for (const Animals& pet : pets) {
		if (const auto x = std::get_if<Cat>(&pet)) x->speak();
		else if (const auto x = std::get_if<Dog>(&pet)) x->speak();
		else if (const auto x = std::get_if<Bear>(&pet)) x->speak();
	}

	Print("visit\n");
	struct AnimalSpeaks
	{
		void operator()(const Cat& x) const { x.speak(); }
		void operator()(const Dog& x) const { x.speak(); }
		void operator()(const Bear& x) const { x.speak(); }
	};
	for (const Animals& pet : pets) {
		std::visit(AnimalSpeaks{}, pet);
	}
}