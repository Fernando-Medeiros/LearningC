#include <algorithm>
#include <iostream>
#include <string>

// Course solution :(
static bool is_palindrome(std::string str) {
	std::transform(str.begin(), str.end(), str.begin(), tolower);
	std::string rev = str;
	std::reverse(rev.begin(), rev.end());  // rev is the reverse of str
	return str == rev;
}

// My solution ¬¬
static bool IsPalindrome(std::string text) {
	auto match = 0;
	auto length = text.size();

	for (int x = 0; x < text.size(); x++) {
		char front = text[x];
		char end = text[--length];
		match += front == end ? 1 : 0;
	}
	return match == text.size();
}

void static Algorithm00()
{
	std::string text;

	std::cout << "Enter a word or a phrase: " << std::flush;
	std::getline(std::cin, text);

	auto result = text +
		+(IsPalindrome(text) ? " is" : " is not")
		+ " a palindrome.";

	std::cout << result << std::endl;
}