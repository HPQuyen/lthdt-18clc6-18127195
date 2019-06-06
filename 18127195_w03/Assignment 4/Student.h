#include "iostream"
#include "conio.h"
#include "string"

using namespace std;
class Student
{
public:
	Student();
	Student(int c, int id, char *& name, char *& addr, double g);
	Student& operator =(Student&x);
	void copy(Student &x);
	void input();
	void output();
	~Student();

private:
	int code;
	int socialId;
	char *fullname;
	char *address;
	double gpa;
};