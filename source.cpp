#include "stdafx.h"
#include "complex.h"
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	complex c1;
	complex c2;
	std::cin >> c1;
	std::cin >> c2;
	char ch;
	do
	{
		system("cls");
		std::cout << "Меню:\n";
		std::cout << "1 - Сложить\n";
		std::cout << "2 - Вычесть\n";
		std::cout << "3 - Умножить\n";
		std::cout << "4 - Разделить\n";
		std::cout << "esc Выход\n";
		ch = _getch();
		switch (ch)
		{
		case '1': std::cout << c1 + c2; break;
		case '2': std::cout << c1 - c2; break;
		case '3': std::cout << c1 * c2; break;
		case '4': std::cout << c1 / c2; 
		}
	} while (ch != 27);
}