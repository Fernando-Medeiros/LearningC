#include "Algorithm04Container.h"

template<typename T>
Collection<T>::Collection() = default;

template<typename T>
Collection<T>::Collection(initializer_list<T> il)
	: collection{ il.begin(), il.end() } {}

template<typename T>
Collection<T>::Collection(const Collection<T>& rhs)
	: collection{ rhs.collection } {}

template<typename T>
Collection<T>::Collection(Collection<T>&& rhs) noexcept
	: collection{ move(rhs.collection) } {}

template<typename T>
T Collection<T>::First() const
{
	return collection.front();
}

template<typename T>
T Collection<T>::Last() const
{
	return collection.back();
}

template<typename T>
string Collection<T>::ToString() const
{
	if (collection.empty()) return "[empty]";

	string out = "";
	for (auto& element : collection)
		out += format("{}:", element);
	return out;
}

template<typename T>
void Collection<T>::Append(T x)
{
	collection.push_back(x);
}

template<typename T>
Collection<T>& Collection<T>::operator=(const Collection<T>& rhs)
{
	if (this != &rhs) {
		Collection{ rhs.collection };
	}
	return *this;
}

template<typename T>
Collection<T>& Collection<T>::operator&&(Collection<T>&& rhs)noexcept
{
	if (this != &rhs) {
		Collection{ move(rhs.collection) };
	}
	return *this;
}
