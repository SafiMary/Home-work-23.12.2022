#include <iostream>
#include <windows.h>
#include "MyClass.h"
#include <string>
#include <stdio.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	MyClass a = { "��������", 10 };
	MyClass b = { "��������", 5 };
	std::cout << b.getStudents() << '\n'; //������������ ������ ��������� ������ operator<<
	std::cout << a.operator/(b) << '\n';  //������������ ������ ��������� ������ operator/
	a.operator+(b);						//������������ ������ ��������� ������ operator+
	a.operator*(b);						//������������ ������ ��������� ������ operator*
	a.operator-(b);						//������������ ������ ��������� ������ operator-
	if (a == b)
		std::cout << "\n������� ����� ���� �����!!" << '\n';  //������������ ������ ��������� ������ operator==

	if (a != b)
		std::cout << "\n�������  �� ����� ���� �����!!" << '\n'; //������������ ������ ��������� ������ operator!=
	a.operator+=(b);					//������������ ������ ��������� ������ operator+=
}