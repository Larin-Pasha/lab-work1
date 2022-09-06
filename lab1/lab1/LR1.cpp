/*Завдання:
Лінійне рівняння у = Ax + В. Поле first — дробове число, коефіцієнт А; поле second — дробове число, коефіцієнт В.Реалізувати метод 
root() — обчислення кореня лінійного рівняння.Метод повинен перевіряти нерівність коефіцієнта А нулю.*/
#include <iostream>
#include "Complex.h"
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Complex calc;
	calc = calc.Read();
	calc.Init();
	calc.root();
	calc.Display();

	return 0;
}