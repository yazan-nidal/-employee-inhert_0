#pragma once
#ifndef houremploye_h
#define houremploye_h
#include"Embploye.h"
class houremploye :public Emp
{
protected:
	int hw;//hour ber weak
	double hwage;// hour wage
public:

	float MonthPay(){ return  (hw*hwage*4); }//month pay
	~houremploye(){}
};
#endif