#include <iostream>
#include <windows.h>
#include "MyClass.h"
#include <string>
#include <stdio.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	MyClass a = { "Петрович", 10 };
	MyClass b = { "Звенович", 5 };
	std::cout << b.getStudents() << '\n'; //демонстрация работы оператора вывода operator<<
	std::cout << a.operator/(b) << '\n';  //демонстрация работы оператора вывода operator/
	a.operator+(b);						//демонстрация работы оператора вывода operator+
	a.operator*(b);						//демонстрация работы оператора вывода operator*
	a.operator-(b);						//демонстрация работы оператора вывода operator-
	if (a == b)
		std::cout << "\nОбъекты равны друг другу!!" << '\n';  //демонстрация работы оператора вывода operator==

	if (a != b)
		std::cout << "\nОбъекты  не равны друг другу!!" << '\n'; //демонстрация работы оператора вывода operator!=
	a.operator+=(b);					//демонстрация работы оператора вывода operator+=
}