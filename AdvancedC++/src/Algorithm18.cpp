#include "../shared/Print.cpp"
#include<chrono>
#include<future>
#include<mutex>
#include<thread>
#include<vector>

using
std::async,
std::mutex,
std::string,
std::vector,
std::lock_guard,
std::chrono::duration,
std::chrono::steady_clock;

class Product {
private:
	int id{};
	string name{};
public:
	Product(int id, string name) : name(name), id(id) {};
	int GetId()const {
		return id;
	};
	string GetName()const {
		return name;
	};
	void UpdateName(string newName, mutex& productMutex) {
		lock_guard<mutex> l{ productMutex }; // AWAIT MUTEX CHANGED TO UNLOCKED
		name = newName;
		Print("Product:{} name:{}\n", id, name);
	};
};

// THREAD - MUTEX LOCK (Access protection for objects shared across threads)
static void Algorithm18() {
	mutex productMutex{};
	auto start = steady_clock::now();
	auto product01 = std::make_unique<Product>(1, "book");
	auto product02 = std::make_unique<Product>(2, "shoe");

	auto task1 = async([&] { product01->UpdateName("LOTR V.1", productMutex); product01->UpdateName("LOTR V.2", productMutex); });
	auto task2 = async([&] { product01->UpdateName("LOTR V.3", productMutex); product01->UpdateName("LOTR V.4", productMutex); });
	auto task3 = async([&] { product02->UpdateName("NKE M.1 ", productMutex); product02->UpdateName("NKE M.2 ", productMutex); });
	auto task4 = async([&] { product02->UpdateName("NKE M.3", productMutex); product02->UpdateName("NKE M.4 ", productMutex); });
	task1.wait(); task2.wait(); task3.wait(); task4.wait();

	Print("Product > id:{} name:{}\n", product01->GetId(), product01->GetName());
	Print("Product > id:{} name:{}\n", product02->GetId(), product02->GetName());

	duration<double> end = steady_clock::now() - start;
	Print("Total duration: {:.3}\n", end);
}