#include <future>

using
std::async,
std::future,
std::launch,
std::chrono::seconds,
std::this_thread::sleep_for;

// FUTURE - ASYNC TASK
static void Algorithm25() {
	printf("Start ... \n");

	future<int> result = async(
		launch::async,							// Policy
		[]()-> int {							// Action
			printf("Process ... ... ... ...\n");
			sleep_for(seconds(3));
			printf("Process finished! (3 seconds)\n");
			return 33;
		});

	printf("Continue ... \n");
	printf("Await result %d.\n", result.get());
}
