#include "stdafx.h"
#include "complex.h"
complex & complex::operator=(const complex &ob)
{
	this->re = ob.re;
	this->im = ob.im;
	return *this;
}
complex complex::operator+(const complex &ob)
{
	return complex(this->re + ob.re, this->im + ob.im);
}
complex complex::operator-(const complex &ob)
{
	return complex(this->re - ob.re, this->im - ob.im);
}
complex complex::operator*(const complex &ob)
{
	return complex(this->re*ob.re - this->im*ob.im, this->re*ob.im + this->im*ob.re);
}
complex complex::operator/(const complex &ob)
{
	return complex
		((this->re*ob.re + this->im*ob.im)/(ob.re*ob.re - ob.im*ob.im), 
		(this->im*ob.re - this->re*ob.im)/(ob.re*ob.re - ob.im*ob.im));
}
std::istream & operator>>(std::istream &os, complex &ob)
{
	std::cout << "Введите комплексное число (re,im): ";
	scanf_s("%i,%i", &ob.re, &ob.im);
	return os;
}
std::ostream & operator<<(std::ostream &os, complex &ob)
{
	system("cls");
	if (ob.im>0) os << ob.re << " + " << ob.im << "i" << std::endl;
	else if (ob.im<0) os << ob.re << " - " << abs(ob.im) << "i" << std::endl;
	else os << ob.re << std::endl;
	system("pause");
	return os;
}