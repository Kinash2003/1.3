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
	cout << " ������ ������� = " << older << endl;
	cout << " ������� ������� = " << junior << endl;
}
void LongLong::Init(double x, double y)
{
	older = x;
	junior = y;
}
void LongLong::Read()
{
	double x, y;
	cout << " ������ �����:" << endl;
	cout << " ������ ������ ������� = "; cin >> x;
	cout << " ������ ������� ������� = "; cin >> y;
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
void LongLong::�omparison()
{
	if (Addition() == Multiplication())
		cout << Addition() << "  �������  " << Multiplication() << " \n ";
	if (Addition() != Multiplication())
		cout << Addition() << "  �� �������  " << Multiplication() << " \n ";
	if (Addition() > Multiplication())
		cout << Addition() << "  ����� ��  " << Multiplication() << " \n ";
	if (Addition() < Multiplication())
		cout << Addition() << "  ����� ��  " << Multiplication() << " \n ";
	if (Addition() >= Multiplication())
		cout << Addition() << "  ����� ��� �������  " << Multiplication() << " \n ";
	if (Addition() <= Multiplication())
		cout << Addition() << "  ����� ��� �������  " << Multiplication() << " \n ";
}
