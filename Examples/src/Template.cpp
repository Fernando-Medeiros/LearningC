
template<class T>
class Vector {
public:
	T X, Y;
	Vector(T x, T y) : X(x), Y(y) {}
};

using Vector2I = Vector<int>;
using Vector2F = Vector<float>;
using Vector2U = Vector<unsigned>;