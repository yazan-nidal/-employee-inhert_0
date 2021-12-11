#pragma once
#pragma once
#ifndef fulltime_H
#define fulltime_H
#include"houremploye.h"
class fulltime :public houremploye
{
public:
	fulltime(char * nam = "hasan emp full", int h = 0,int ht = 0,double hr = 0)
	{
		name_ofWorkers=new char[strlen(nam)+1];
		strcpy(name_ofWorkers,nam);
		HireYear=h;
		hw=ht;
		hwage=hr;
	}
	float  AnnualPay()
	{
		return  (hw*hwage*50)+(hw*hwage*2);
	}
	~fulltime(){}

};
#endif