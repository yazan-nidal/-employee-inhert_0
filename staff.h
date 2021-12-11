#pragma once
#ifndef staff_h
#define staff_h
#include"salaredEmp.h"
class Staff :public salredmploye
{
public:
	Staff(char * nam ="hasan emp full", int h = 0,int ht = 0)
	{
		name_ofWorkers=new char[strlen(nam)+1];
		strcpy(name_ofWorkers,nam);
		HireYear=h;
		AnS=ht;

	}
		float AnnualPay(){
	int e=2020-HireYear ; 
	if(e<=5)return AnS+(AnS*e*0.02);
	return AnS+(AnS*0.10);
	}
		~Staff(){}

};
#endif