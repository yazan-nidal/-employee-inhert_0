#pragma once
#ifndef salaredEmp_h
#define salaredEmp_h
#include"Embploye.h"
class salredmploye :public Emp
{
protected :
	int AnS;//annual salari
public:
	float MonthPay(){ return AnS/(double)12; };//month pay
	~salredmploye(){}
};
#endif