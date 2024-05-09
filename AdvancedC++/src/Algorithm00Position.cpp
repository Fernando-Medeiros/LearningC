#include "Algorithm00Position.h"
#include <format>

Position::Position(float x, float y) : X(x), Y(y) {}

Position::Position(const Position& pos) : X(pos.X), Y(pos.Y) {}

Position::~Position() = default;

float Position::Vertical() const { return Y; }

float Position::Horizontal() const { return X; }

void Position::Vertical(float y) { Y += y; }

void Position::Horizontal(float x) { X += x; }

std::string Position::ToString() const {
	return std::format("X={} Y={}", X, Y);
}

Position& Position::operator=(const Position& pos)
{
	if (this != &pos) {
		Y = pos.Vertical();
		X = pos.Horizontal();
	}
	return *this;
}

Position Position::operator+(const Position& pos) const
{
	return Position(
		Horizontal() + pos.Horizontal(),
		Vertical() + pos.Vertical());
}

Position Position::operator-(const Position& pos) const
{
	return Position(
		Horizontal() - pos.Horizontal(),
		Vertical() - pos.Vertical());
}

Position Position::operator*(const Position& pos) const
{
	return Position(
		Horizontal() * pos.Horizontal(),
		Vertical() * pos.Vertical());
}

void Position::operator/(const Position& pos)
{
	Y /= pos.Vertical();
	X /= pos.Horizontal();
}

bool Position::operator==(const Position& pos) const
{
	return Horizontal() == pos.Horizontal()
		&& Vertical() == pos.Vertical();
}
