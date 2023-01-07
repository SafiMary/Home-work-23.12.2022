#pragma once
#include <string>

class MyClass
{
public:
	MyClass();
	MyClass(const std::string& students, int numbers);
	~MyClass();
	const std::string& getStudents()const;
	void setStudents(const std::string& students);
	int getNumbers() const;
	void setNumbers(int numbers);
	friend std::ostream& operator<<(std::ostream& os, MyClass& other);
	double operator/(MyClass& other);
	void operator+(MyClass& other);
	void operator*(MyClass& other);
	void operator-(MyClass& other);
	bool operator==(MyClass& other);
	bool operator!=(MyClass& other);
	void operator+=(MyClass& other);



private:
	std::string _students;
	int _numbers;
};

