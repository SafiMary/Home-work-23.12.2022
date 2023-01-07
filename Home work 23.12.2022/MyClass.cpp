#include "MyClass.h"
#include <iostream>
#include <string>


MyClass::MyClass(): _students("����"), _numbers(3) {}
MyClass::MyClass(const std::string& students, int numbers): _students(students), _numbers(numbers) {}
MyClass::~MyClass(){}
const std::string& MyClass::getStudents() const {
	return _students;
}
void MyClass::setStudents(const std::string& students) {
	_students = students;
}
int MyClass::getNumbers() const{
	return _numbers;
}
void MyClass::setNumbers(int numbers) {
	_numbers = numbers;
}
std::ostream& operator<<(std::ostream& os, MyClass& other) {
	os  << other.getStudents();
	return os;
}
double MyClass::operator/(MyClass& other) {  //
	std::cout << "\n�������� �������: \n";
	return _numbers / other._numbers;
}
void MyClass::operator+(MyClass& other) {  //
	std::cout << "\n�������� ��������: \n"
	<< _numbers + other._numbers;
}
void MyClass::operator*(MyClass& other) {   //
	std::cout << "\n�������� ���������: \n"
	<< _numbers * other._numbers;
}
void MyClass::operator-(MyClass& other) {  //
	std::cout << "\n�������� ���������: \n"
	<< _numbers - other._numbers;
}
bool MyClass::operator==(MyClass& other) { //
	return _numbers == other._numbers;
}
bool MyClass::operator!=(MyClass& other) {  //
	return (_numbers != other._numbers); 
}
void MyClass::operator+=(MyClass& other) {
	std::cout << "\n�������� +=: \n"
		<< (_numbers += other._numbers);
}

