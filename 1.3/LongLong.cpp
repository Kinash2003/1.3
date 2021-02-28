//LongLong.cpp
#include "LongLong.h"
#include <iostream>
#include <cmath>
#include <string>
#include <sstream> 
using namespace std;
void LongLong::Display()
{
	cout << endl;
	cout << " Старша частина = " << older << endl;
	cout << " Молодша частина = " << junior << endl;
}
void LongLong::Init(double x, double y)
{
	older = x;
	junior = y;
}
void LongLong::Read()
{
	double x, y;
	cout << " Введіть числа:" << endl;
	cout << " Введіть старшу частину = "; cin >> x;
	cout << " Введіть молодшу частину = "; cin >> y;
	Init(x, y);
}
double LongLong::Addition()
{
	return older + junior;
}
double LongLong::Multiplication()
{
	return older * junior;
}
void LongLong::Сomparison()
{
	if (Addition() == Multiplication())
		cout << Addition() << "  дорівнює  " << Multiplication() << " \n ";
	if (Addition() != Multiplication())
		cout << Addition() << "  не дорівнює  " << Multiplication() << " \n ";
	if (Addition() > Multiplication())
		cout << Addition() << "  більше ніж  " << Multiplication() << " \n ";
	if (Addition() < Multiplication())
		cout << Addition() << "  менше ніж  " << Multiplication() << " \n ";
	if (Addition() >= Multiplication())
		cout << Addition() << "  більше або дорівнює  " << Multiplication() << " \n ";
	if (Addition() <= Multiplication())
		cout << Addition() << "  менше або дорівнює  " << Multiplication() << " \n ";
}
