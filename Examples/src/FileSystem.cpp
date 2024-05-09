#include <filesystem>
#include <iostream>
#include <string>

static bool exists(const std::string& path) {
	return std::filesystem::exists(path);
}

static void FileSystem() {
	std::string home = "HOME"; // Depreacated getenv("HOME");
	home = home + "/";

	std::cout << (exists(home + "Downloads") ? "Yes" : "Not") << "\n";
}