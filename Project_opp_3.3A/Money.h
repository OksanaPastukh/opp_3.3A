#pragma once
#include <iostream>
#include <string>
using namespace std;

class Money
{
private:
	long hryvnia;
	unsigned char kopiyku;
protected:
	double MoneyToDoble() const;
	void DoubleToMoney(double);
public:
	Money();
	Money(long, unsigned char);
	Money(const Money&);


	bool SetHryvnia(long);
	bool SetKopiyku(unsigned char);
	long GetHryvnia() const { return hryvnia; }
	unsigned char GetKopiyku() const { return kopiyku; }

	friend istream& operator >> (istream&, Money&);
	Money& operator = (const Money&);
	operator string() const;
	friend ostream& operator << (ostream&, const Money&);
};

