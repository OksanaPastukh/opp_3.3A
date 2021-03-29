#pragma once
#include "Money.h"
using namespace std;
class PrivateMoney : private Money
{
public:
	PrivateMoney();
	PrivateMoney(long, unsigned char);
	PrivateMoney(const PrivateMoney&);

	friend istream& operator >> (istream&, PrivateMoney&);
	PrivateMoney& operator = (const PrivateMoney&);
	operator string() const;
	friend ostream& operator << (ostream&, const PrivateMoney&);
	friend PrivateMoney operator - (const PrivateMoney&, const PrivateMoney&);
	friend PrivateMoney operator * (const PrivateMoney&, const PrivateMoney&);
	friend bool operator <(const PrivateMoney&, const PrivateMoney&);
	friend bool operator >(const PrivateMoney&, const PrivateMoney&);
	friend bool operator == (const PrivateMoney&, const PrivateMoney&);

	PrivateMoney& operator ++();
	PrivateMoney& operator --();
	PrivateMoney operator ++(int);
	PrivateMoney operator --(int);
};

