#include "Fraction.h"
Fraction::Fraction()
{
	nu = de = 1;
}

Fraction::~Fraction()
{
	nu = de = 0;
}

Fraction::Fraction(const Fraction & x)
{
	this->nu = x.nu;
	this->de = x.de;
}

Fraction Fraction::operator++(int x)
{
	Fraction d(*this);
	nu = nu + de;
	return d;
}

Fraction & Fraction::operator++()
{
	nu = nu + de;
	return *this;
}

void Fraction::reduce()
{
	if (nu == 0 || de == 0)
	{
		return;
	}
	else
	{
		int temp = commonDivisor(nu, de);
		nu = nu / temp;
		de = de / temp;
	}
}

Fraction& Fraction::operator=(const Fraction & x)
{
	if (this == &x)
	{
		return *this;
	}
	this->nu = x.nu;
	this->de = x.de;
	return *this;
}

Fraction Fraction::operator+(const Fraction & x)
{
	Fraction temp;
	temp.nu = nu * x.de + x.nu*de;
	temp.de = de * x.de;
	return temp;
}

Fraction Fraction::operator*(const Fraction & x)
{
	return Fraction(nu*x.nu,de*x.de);
}

Fraction Fraction::operator/(const Fraction & x)
{
	return Fraction(nu*x.de,de*x.nu);
}

Fraction Fraction::operator-(const Fraction & x)
{
	return Fraction(nu*x.de - x.nu*de, de*x.de);
}

bool Fraction::operator==(const Fraction & x)
{
	Fraction temp(nu, de);
	int ans = compare(temp, x);
	if (ans == 0)
	{
		return true;
	}
	return false;
}

bool Fraction::operator>(const Fraction & x)
{
	Fraction temp(nu, de);
	int ans = compare(temp, x);
	if (ans == 1)
	{
		return true;
	}
	return false;
}

bool Fraction::operator<(const Fraction & x)
{
	Fraction temp(nu, de);
	int ans = compare(temp, x);
	if (ans == -1)
	{
		return true;
	}
	return false;
}

bool Fraction::operator>=(const Fraction & x)
{
	Fraction temp(nu, de);
	int ans = compare(temp, x);
	if (ans == 0 || ans == 1)
	{
		return true;
	}
	return false;
}

bool Fraction::operator<=(const Fraction & x)
{
	Fraction temp(nu, de);
	int ans = compare(temp, x);
	if (ans == 0 || ans == -1)
	{
		return true;
	}
	return false;
}

Fraction Fraction::operator+(int x)
{
	return Fraction(nu+x*de,de);
}

Fraction & Fraction::operator+=(const Fraction & x)
{
	return *this = *this + x;
}

Fraction & Fraction::operator-=(const Fraction & x)
{
	return *this = *this - x;
}

Fraction & Fraction::operator*=(const Fraction & x)
{
	return *this = *this * x;
}

Fraction & Fraction::operator/=(const Fraction & x)
{
	return *this = *this + x;
}

Fraction::Fraction(int x, int y)
{
	if (y != 0)
	{
		nu = x;
		de = y;
	}
	else
	{
		nu = x;
		de = 1;
	}
}
int compare(const Fraction &x,const Fraction &y)
{
	double temp1 = double(x.nu) / double(x.de);
	double temp2 = double(y.nu) / double(y.de);
	if ((temp1 - temp2) >0)
	{
		return 1;
	}
	else if((temp1 - temp2) == 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

Fraction operator+(int x, Fraction y)
{
	return Fraction(x*y.de+y.nu,y.de);
}

ostream & operator<<(ostream & os, const Fraction & x)
{
	int xnu = x.nu, xde = x.de;
	if (x.nu*x.de < 0)
	{
		if (x.nu > 0 && x.de < 0)
		{
			xnu = -x.nu;
			xde = -x.de;
		}
	}
	else
	{
		if (x.nu < 0 && x.de < 0)
		{
			xnu = -x.nu;
			xde = -x.de;
		}
	}
	if (x.de != 1)
	{
		os << "Fraction: " << xnu << "/" << xde << "\n";
	}
	else
	{
		os << "Fraction: " << xnu << "\n";
	}
	return os;
}

istream & operator>>(istream & is, Fraction & x)
{
	cout << "Numerator: ";
	is >> x.nu;
	cout << "Denominator: ";
	is >> x.de;
	return is;
}


int commonDivisor(int x, int y)
{
	if (x==0 || y==0)
	{
		return x + y;
	}
	x = abs(x);
	y = abs(y);
	while (x != y)
	{
		if (x>y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}

