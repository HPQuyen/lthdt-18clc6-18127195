#include "iostream"
#include "conio.h"
using namespace std;
class Fraction
{
public:
	Fraction();
	Fraction(int x, int y);
	~Fraction();
	Fraction(const Fraction &x);
	friend int compare(const Fraction &x,const Fraction &y);
	friend Fraction operator+(int x, Fraction y);
	friend ostream& operator<<(ostream &os, const Fraction &x);
	friend istream& operator>>(istream &is, Fraction &x);
	Fraction operator++(int x);
	Fraction& operator++();
	void reduce();
	Fraction &operator=(const Fraction &x);
	Fraction operator+(const Fraction &x);
	Fraction operator*(const Fraction &x);
	Fraction operator/(const Fraction &x);
	Fraction operator-(const Fraction &x);
	bool operator == (const Fraction &x);
	bool operator > (const Fraction &x);
	bool operator < (const Fraction &x);
	bool operator >= (const Fraction &x);
	bool operator <= (const Fraction &x);
	Fraction operator+(int x);
	Fraction &operator+=(const Fraction &x);
	Fraction &operator-=(const Fraction &x);
	Fraction &operator*=(const Fraction &x);
	Fraction &operator/=(const Fraction &x);
private:
	int nu, de;
};
int commonDivisor(int x, int y);
