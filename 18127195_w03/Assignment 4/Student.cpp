#include "Student.h"
#define _CRT_SECURE_NO_WARNINGS

Student::Student()
{
	code = socialId = 0;
	fullname = new char[100];
	address = new char[100];
	gpa = 0.0;
}

Student::Student(int c, int id, char*& name, char*& addr, double g)
{
	code = c;
	socialId = id;
	fullname = name;
	address = addr;
	name = addr = NULL;
	gpa = g;
}

Student & Student::operator=(Student & x)
{
	if (this == &x)
	{
		return *this;
	}
	this->code = x.code;
	this->socialId = x.socialId;
	this->fullname = x.fullname;
	this->address = x.address;
	this->gpa = x.gpa;
	x.fullname = x.address = NULL;
}

void Student::copy(Student & x)
{
	this->code = x.code;
	this->socialId = x.socialId;
	this->fullname = x.fullname;
	this->address = x.address;
	this->gpa = x.gpa;
	x.fullname = x.address = NULL;
}

void Student::input()
{
	cout << "Student ID: ";
	cin >> code;
	cout << "Social ID: ";
	cin >> socialId;
	cout << "Full name: ";
	cin >> fullname;
	cout << "Address: ";
	cin >> address;
	cout << "Gpa: ";
	cin >> gpa;
}

void Student::output()
{
	cout << "Student Information\n";
	cout << "\t\tCode: " << code << "\n";
	cout << "\t\tSocial ID: " << socialId << "\n";
	cout << "\t\tFull name: " << fullname << "\n";
	cout << "\t\tAddress: " << address << "\n";
	cout << "\t\tGpa: " << gpa << "\n";
}

Student::~Student()
{
	delete[] fullname;
	delete[] address;
	code = socialId = 0;
	fullname = address = NULL;
	gpa = 0.0;
}