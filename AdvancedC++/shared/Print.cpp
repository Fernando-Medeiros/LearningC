#include <format>
#include <string>

static constexpr void Print(
	const std::string_view str_fmt,
	auto&&... args) {

	fputs(
		std::vformat(str_fmt, std::make_format_args(args...)).c_str(),
		stdout);
}