#include <iostream>
#include <vector>

enum class EProduct { Computer, Mouse, HeadPhone };

class Order {
private:
	int Id;
	EProduct Product;
public:
	Order(EProduct product) {
		Id = rand();
		Product = product;
	}
	int Get() const {
		return Id;
	}
	void Set(EProduct product) {
		Product = product;
	}
};

static void Algorithm14() {
	std::vector<Order> Orders;

	Orders.push_back(Order(EProduct::Mouse));
	Orders.push_back(Order(EProduct::Computer));
	Orders.push_back(Order(EProduct::HeadPhone));


	std::cout << "Id = " << Orders.begin()->Get() << std::endl;
	std::cout << "Id = " << prev(Orders.end() - 1)->Get() << std::endl;
	std::cout << "Id = " << (Orders.end() - 1)->Get() << std::endl;
	
	std::cout << "Id = " << Orders.front().Get() << std::endl;
	std::cout << "Id = " << Orders.back().Get() << std::endl;
}