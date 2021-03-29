#include "PrivateMoney.h"
#include <sstream>

PrivateMoney::PrivateMoney() :Money()
{}
PrivateMoney::PrivateMoney(long h, unsigned char k) : Money(h, k)
{}
PrivateMoney::PrivateMoney(const PrivateMoney& m) : Money(m)
{}
PrivateMoney& PrivateMoney::operator = (const PrivateMoney& m)
{
	Money::operator=(m);
	return *this;
}

istream& operator >> (istream& in, PrivateMoney& m)
{
	double value;
	long hr;
	unsigned char kop;
	cout << " Summa = "; in >> value;
	do
	{
		hr = floor(value);
		kop = round((value - hr) * 100);
	} while (!(m.SetHryvnia(hr) && m.SetKopiyku(kop)));
	return in;
}
PrivateMoney::operator string () const
{
	return Money::operator std::string();
	
}
ostream& operator << (ostream& out, const PrivateMoney& p)
{
	out << string(p);
	return out;
}

PrivateMoney operator - (const PrivateMoney& x, const PrivateMoney& y)
{
	PrivateMoney result;
	double h = x.MoneyToDoble() - y.MoneyToDoble();
	result.DoubleToMoney(h);
	return result;
}
PrivateMoney operator * (const PrivateMoney& x, const PrivateMoney& y)
{
	PrivateMoney result;
	double h = x.MoneyToDoble() * y.MoneyToDoble();
	result.DoubleToMoney(h);
	return result;
}
bool operator < (const PrivateMoney& x, const PrivateMoney& y)
{
	return x.MoneyToDoble() < y.MoneyToDoble();
}
bool operator > (const PrivateMoney& x, const PrivateMoney& y)
{
	return x.MoneyToDoble() > y.MoneyToDoble();
}
bool operator == (const PrivateMoney& x, const PrivateMoney& y)
{
	return x.MoneyToDoble() == y.MoneyToDoble();
}

PrivateMoney& PrivateMoney::operator ++()
{
	if (GetKopiyku() == 99)
	{
		SetKopiyku(0);
		SetHryvnia(GetHryvnia() + 1);
	}
	else
	{
		SetKopiyku(GetKopiyku() + 1);
	}
	return *this;
}
PrivateMoney& PrivateMoney::operator --()
{
	if (GetKopiyku() == 0)
	{
		SetKopiyku(99);
		SetHryvnia(GetHryvnia() - 1);
	}
	else
	{
		SetKopiyku(GetKopiyku() - 1);
	}
	return *this;
}
PrivateMoney  PrivateMoney::operator ++(int)
{
	PrivateMoney t(*this);
	SetHryvnia(GetHryvnia() + 1);

	return t;
}
PrivateMoney PrivateMoney::operator --(int)
{
	PrivateMoney t(*this);
	SetHryvnia(GetHryvnia() - 1);
	return t;
}