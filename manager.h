#pragma once
#ifndef manager_h
#define manager_h
#include "salaredEmp.h"
class manager :public salredmploye
{
public:
	manager(char * nam = "hasan emp full", int h = 0,int ht = 0)
	{
		name_ofWorkers=new char[strlen(nam)+1];
		strcpy(name_ofWorkers,nam);
		HireYear=h;
		AnS=ht;
	}


	float AnnualPay(){  return AnS+(AnS*0.1); }
	~manager(){}
	                                                                                                                                                                                             
};
#endif
