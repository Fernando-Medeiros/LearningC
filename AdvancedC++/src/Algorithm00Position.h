#pragma once
#include <string>

class Position {
private:
	float X{ 0.0f };
	float Y{ 0.0f };
public:
	Position(float x = 0.0f, float y = 0.0f);
	Position(const Position& pos);
	~Position();
	float Vertical() const;
	float Horizontal() const;
	std::string ToString()const;
	void Vertical(float y);
	void Horizontal(float x);
	Position& operator = (const Position& pos);
	Position operator + (const Position& pos) const;
	Position operator - (const Position& pos) const;
	Position operator * (const Position& pos) const;
	void operator / (const Position& pos);
	bool operator == (const Position&) const;
	explicit(false) operator std::string() const;
};

