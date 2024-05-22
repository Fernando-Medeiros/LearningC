#include <filesystem>
#include <format>
#include <iostream>
#include <string>

using
std::cout,
std::string,
std::format,
std::filesystem::path,
std::filesystem::exists,
std::filesystem::absolute,
std::filesystem::canonical,
std::filesystem::current_path,
std::filesystem::directory_iterator;

// I/O
static void FileSystem() {
	auto canonicalPath{ canonical(path(".")) };
	auto absolutePath{ absolute(canonicalPath) };
	auto currentPath{ current_path() };
	auto srcPath{ path(canonicalPath) /= "src" };
	auto rawPath{ path(canonicalPath) /= "raw" };

	cout << "canonical: " << canonicalPath << "\n";
	cout << "absolute : " << absolutePath << "\n";
	cout << "current  : " << currentPath << "\n";
	cout << "src	  : " << srcPath << "\n";
	cout << "raw	  : " << rawPath << "\n";

	auto coutFiles = [](path& p) {
		cout << ":: " << p << "\n";
		for (auto& entry : directory_iterator(p)) {
			cout << entry.path().filename() << "\n";
		}};

	coutFiles(srcPath);
	coutFiles(rawPath);
	coutFiles(currentPath);

	cout << "Text.txt ?: " << exists(rawPath.concat("\\Text.txt")) << "\n";
}