#include <condition_variable>
#include <format>
#include <iostream>
#include <mutex>
#include <thread>

using
std::mutex,
std::thread,
std::unique_lock,
std::condition_variable;

void hungry_person(int id, int soup_servings, mutex& slow_cooker_lid, condition_variable& soup_taken) {
	int put_lid_back = 0;

	while (soup_servings > 0) {
		unique_lock<mutex> lid_lock(slow_cooker_lid); // pick up the slow cooker lid

		while ((id != soup_servings % 5) && (soup_servings > 0)) { // is it your turn to take soup?
			put_lid_back++; // it's not your turn; put the lid back...
			soup_taken.wait(lid_lock); // ...and wait...
		}

		if (soup_servings > 0) {
			soup_servings--; // it's your turn; take some soup!
			lid_lock.unlock(); // put back the lid
			soup_taken.notify_all(); // notify another thread to take their turn
		}
	}
	printf("Person %d put the lid back %u times.\n", id, put_lid_back);
}

static void Algorithm21() {
	int soup_servings = 10;
	mutex slow_cooker_lid;
	condition_variable soup_taken;

	thread hungry_threads[5];

	for (int idx = 0; idx < 5; idx++) {
		hungry_threads[idx] = thread(hungry_person, idx, soup_servings, std::ref(slow_cooker_lid), std::ref(soup_taken));
	}
	for (auto& ht : hungry_threads) {
		ht.join();
	}
}