#pragma once
#include "Money.h"
using namespace std;

class PublicMoney :public Money
{
public:
	PublicMoney();
	PublicMoney(long, unsigned char);
	PublicMoney(const PublicMoney&);

	friend PublicMoney operator - (const PublicMoney&, const PublicMoney&);
	friend PublicMoney operator * (const PublicMoney&, const PublicMoney&);
	friend bool operator <(const PublicMoney&, const PublicMoney&);
	friend bool operator >(const PublicMoney&, const PublicMoney&);
	friend bool operator == (const PublicMoney&, const PublicMoney&);

	PublicMoney& operator ++();
	PublicMoney& operator --();
	PublicMoney operator ++(int);
	PublicMoney operator --(int);
};

