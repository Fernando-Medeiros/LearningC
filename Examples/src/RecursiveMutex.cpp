#include <mutex>
#include <thread>

static void RecursiveMutex() {
	unsigned int garlic_count = 0;
	unsigned int potato_count = 0;
	std::recursive_mutex pencil;

	auto add_garlic = [&]() {
		pencil.lock();
		garlic_count++;
		pencil.unlock();
		};

	auto add_potato = [&]() {
		pencil.lock();
		potato_count++;
		add_garlic();
		pencil.unlock();
		};

	auto shopper = [&]() {
		for (int i = 0; i < 10000; i++) {
			add_garlic();
			add_potato();
		}
		};


	std::thread barron(shopper);
	std::thread olivia(shopper);
	barron.join();
	olivia.join();
	printf("We should buy %u garlic.\n", garlic_count);
	printf("We should buy %u potatoes.\n", potato_count);
}