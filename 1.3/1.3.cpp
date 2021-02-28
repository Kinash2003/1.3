//1.3.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "LongLong.h"
#include <Windows.h> 
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	LongLong z;
	z.Read();
	z.Display();
	cout << " Додавання = " << z.Addition() << endl;
	cout << " Mноження = " << z.Multiplication() << endl;
	cout << " Порівняння: "<<" \n ";
	z.Сomparison();
	cin.get();
	return 0;
}