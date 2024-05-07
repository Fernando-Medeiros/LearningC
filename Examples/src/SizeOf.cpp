#include <iostream>

static void SizeOf() {
	std::string text = "Hello World!";

	std::cout << text << '\n';
	printf("length %d\n", text.size());
	printf("bytes  %d\n", sizeof(text));
}