/*��������:
˳���� ������� � = Ax + �. ���� first � ������� �����, ���������� �; ���� second � ������� �����, ���������� �.���������� ����� 
root() � ���������� ������ ������� �������.����� ������� ��������� �������� ����������� � ����.*/
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