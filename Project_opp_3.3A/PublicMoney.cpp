#include "PublicMoney.h"
PublicMoney::PublicMoney():Money()
{}
PublicMoney::PublicMoney(long h, unsigned char k):Money(h,k)
{}
PublicMoney::PublicMoney(const PublicMoney& m):Money(m)
{}

PublicMoney operator - (const PublicMoney& x, const PublicMoney& y)
{
	PublicMoney result;
	double h = x.MoneyToDoble() - y.MoneyToDoble();
	result.DoubleToMoney(h);
	return result;
}
PublicMoney operator * (const PublicMoney& x, const PublicMoney& y)
{
	PublicMoney result;
	double h = x.MoneyToDoble() * y.MoneyToDoble();
	result.DoubleToMoney(h);
	return result;
}
bool operator < (const PublicMoney& x, const PublicMoney& y)
{
	return x.MoneyToDoble() < y.MoneyToDoble();
}
bool operator > (const PublicMoney& x, const PublicMoney& y)
{
	return x.MoneyToDoble() > y.MoneyToDoble();
}
bool operator == (const PublicMoney& x, const PublicMoney& y)
{
	return x.MoneyToDoble() == y.MoneyToDoble();
}

PublicMoney& PublicMoney::operator ++()
{
	if (GetKopiyku() == 99)
	{
		SetKopiyku(0);
		SetHryvnia(GetHryvnia()+1);
	}
	else
	{
		SetKopiyku(GetKopiyku()+1);
	}
	return *this;
}
PublicMoney& PublicMoney::operator --()
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
PublicMoney  PublicMoney::operator ++(int)
{
	PublicMoney t(*this);
	SetHryvnia(GetHryvnia() + 1);

	return t;
}
PublicMoney PublicMoney::operator --(int)
{
	PublicMoney t(*this);
	SetHryvnia(GetHryvnia() - 1);
	return t;
}