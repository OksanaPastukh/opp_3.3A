#include "PrivateMoney.h"
#include "PublicMoney.h"
#include <iostream>
using namespace std;

int main()
{
	PrivateMoney m(10, 25);
	cout << "money1 = " << m << endl;
	PrivateMoney m2;
	m2 = ++m;
	cout << "money2 = ++money: \n" << "money = " << m << "money2 = " << m2 << endl;
	m2 = --m;
	cout << "money2 = --money: \n" << "money = " << m << "money2 = " << m2 << endl;
	m2 = m++;
	cout << "money2 = money++: \n" << "money = " << m << "money2 = " << m2 << endl;
	m2 = m--;
	cout << "money2 = money--: \n" << "money = " << m << "money2 = " << m2 << endl;
	PublicMoney x;
	cout << "Input  value ->" << endl;
	cin >> x;
	cout << x << endl;
	PublicMoney b;
	cout << "Input  value ->" << endl;
	cin >> b;
	cout << b << endl;
	PublicMoney c = x - b;
	cout << c << endl;
	PublicMoney l = x * b;
	cout << l << endl;
	PublicMoney k;
	cout << "Enter compare summa "; cin >> k;
	bool f = x < k;
	if (x < k)
	{
		cout << "Yes, current value < comparative summa " << endl;
	}
	else
	{
		cout << "No, current value < comparative summa " << endl;
	}
	if (x > k)
	{
		cout << "Yes, current value > comparative summa " << endl;
	}
	else
	{
		cout << "No, current value < comparative summa " << endl;
	}
	if (x == k)
	{
		cout << "Yes, current value = comparative summa " << endl;
	}
	else
	{
		cout << "No, they are not equal " << endl;
	}
	cin.get();
	return 0;
}