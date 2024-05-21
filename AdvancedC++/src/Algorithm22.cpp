#include <condition_variable>
#include <mutex>
#include <queue>
#include <thread>

class ServingLine {
private:
	std::queue<int> soup_queue;
	std::mutex ladle;
	std::condition_variable soup_served;
public:
	void serve_soup(int i) {
		std::unique_lock<std::mutex> ladle_lock(ladle);
		soup_queue.push(i);
		ladle_lock.unlock();
		soup_served.notify_one();
	}

	int take_soup() {
		std::unique_lock<std::mutex> ladle_lock(ladle);

		while (soup_queue.empty()) {
			soup_served.wait(ladle_lock);
		}
		int bowl = soup_queue.front();
		soup_queue.pop();
		return bowl;
	}
};

static void soup_producer(ServingLine& serving_line) {
	for (int i = 0; i < 10000; i++) {
		serving_line.serve_soup(1);
	}
	serving_line.serve_soup(-1);
	printf("Producer is done serving soup!\n");
}

static void soup_consumer(ServingLine& serving_line) {
	int soup_eaten = 0;

	while (true) {
		int bowl = serving_line.take_soup();
		if (bowl == -1) {
			printf("Consumer ate %d bowls of soup.\n", soup_eaten);
			serving_line.serve_soup(-1);
			return;
		}
		else {
			soup_eaten += bowl; // eat the soup
		}
	}
}

// PRODUCE - CONSUMER
static void Algorithm22() {
	auto serving_line{ ServingLine() };

	std::thread olivia{ soup_producer, std::ref(serving_line) };
	std::thread barron{ soup_consumer, std::ref(serving_line) };
	std::thread steve{ soup_consumer, std::ref(serving_line) };
	olivia.join(); barron.join(); steve.join();
}