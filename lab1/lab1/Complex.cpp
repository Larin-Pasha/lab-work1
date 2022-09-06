#include<iostream>
#include"Complex.h"
using namespace std;

Complex Complex::Init()
{
	Complex tmp;
	tmp.first = this->first;
	if (tmp.first == 0)
	{
		cout << "Помилка";
		exit(0);
	}
	return tmp;
}

Complex Complex::Read()
{
	Complex tmp;
	cout << "Введіть змінну A" << endl;
	cin >> tmp.first;
	cout << "Введіть змінну B" << endl;
	cin >> tmp.second;
	return tmp;
}

Complex Complex::root()
{
	Complex tmp;
	tmp.first = this->first;
	tmp.second = this->second;
	x = (-1) * tmp.second / tmp.first;
	return tmp;
}

void Complex::Display()
{
	cout << "x=" << x;
}
