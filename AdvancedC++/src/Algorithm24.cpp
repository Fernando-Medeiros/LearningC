#include <barrier>
#include <mutex>
#include <thread>

using
std::mutex,
std::thread,
std::barrier,
std::scoped_lock;

static unsigned int BAGS_OF_CHIPS = 1; // start with one on the list

static void cpu_work(unsigned long workUnits) {
	unsigned long x = 0;

	for (unsigned long i{}; i < workUnits * 1000000; i++) {
		x++;
	}
}

static void barron_shopper(mutex& pencilMutex, barrier<>& pencilBarrier) {
	cpu_work(1); // do a bit of work first

	pencilBarrier.arrive_and_wait();
	scoped_lock<mutex> guard(pencilMutex);
	BAGS_OF_CHIPS *= 2;

	printf("Barron DOUBLED the bags of chips.\n");
}

static void olivia_shopper(mutex& pencilMutex, barrier<>& pencilBarrier) {
	cpu_work(1); // do a bit of work first
	{
		scoped_lock<mutex> guard(pencilMutex);
		BAGS_OF_CHIPS += 3;
	}
	printf("Olivia ADDED 3 bags of chips.\n");
	pencilBarrier.arrive_and_wait();
}

// RACE CONDITION
static void Algorithm24() {
	mutex pencilMutex{};
	thread shoppers[10];
	barrier<> pencilBarrier{ 10 };

	for (int idx = 0; idx < 10; idx += 2)
	{
		shoppers[idx] = thread(barron_shopper, std::ref(pencilMutex), std::ref(pencilBarrier));
		shoppers[idx + 1] = thread(olivia_shopper, std::ref(pencilMutex), std::ref(pencilBarrier));
	}
	for (auto& shopper : shoppers)
	{
		shopper.join();
	}
	printf("We need to buy %u bags_of_chips.\n", BAGS_OF_CHIPS);
}