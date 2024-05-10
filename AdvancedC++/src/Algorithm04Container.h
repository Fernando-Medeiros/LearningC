#pragma once
#include <format>
#include <string>
#include <utility>
#include <vector>

using
std::string,
std::vector,
std::format,
std::move,
std::swap,
std::initializer_list;

template<typename T>
class Collection {
private:
	vector<T> collection{};
public:
	Collection();
	Collection(initializer_list<T> il);
	Collection(const Collection<T>& rhs);
	Collection(Collection<T>&& rhs) noexcept;
	T First()const;
	T Last()const;
	string ToString()const;
	void Append(T x);
	Collection<T>& operator = (Collection<T> rhs);
	Collection<T>& operator = (const Collection<T>& rhs);
	Collection<T>& operator && (Collection<T>&& rhs) noexcept;
};