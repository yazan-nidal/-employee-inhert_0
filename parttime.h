#pragma once
#ifndef parttime_h
#define parttime_h
#include"houremploye.h"
class parttime :public houremploye
{
public:
	parttime(char * nam = "hasan emp full", int h = 0,int ht = 0,double hr = 0)
	{
		name_ofWorkers=new char[strlen(nam)+1];
		strcpy(name_ofWorkers,nam);
		HireYear=h;
		hw=ht;
		hwage=hr;
	}
	float  AnnualPay(){ return  (hw*hwage*50); }
	
	~parttime(){}


};
#endif