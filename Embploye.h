#pragma warning(disable: 4996)
#ifndef Embploye_h
#define Embploye_h
#include<iostream>
using namespace std;
class Emp {
protected:
	char* name_ofWorkers;
	int HireYear;
public:

	char* getWorkers(){ return name_ofWorkers; }
	virtual float MonthPay(){ return 0; }
	virtual float AnnualPay(){ return 0; }
	virtual ~Emp(){ delete []name_ofWorkers; }
};
#endif