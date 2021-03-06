#pragma once
class complex
{
	int re = 0;
	int im = 0;
public:
	complex() = default;
	complex(int r, int i) : re(r), im(i) {}
	complex &operator=(const complex &);
	complex operator+(const complex &);
	complex operator-(const complex &);
	complex operator*(const complex &);
	complex operator/(const complex &);
	friend std::istream & operator>>(std::istream &, complex &);
	friend std::ostream & operator<<(std::ostream &, complex &);
};