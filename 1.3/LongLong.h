//LongLong.h
#pragma once
class LongLong
{
	double older, junior;
public:
	double Getolder() const { return older; }
	double Getjunior() const { return junior; }
	void Setolder(double value) { older = value; }
	void Setjunior(double value) { junior = value; }
	void Init(double, double);
	void Read();
	void Ñomparison();
	void Display();
	double Addition();
	double Multiplication();
	};
	
