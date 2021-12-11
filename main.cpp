#include"Embploye.h"
#include"Embploye.h"
#include"salaredEmp.h"
#include"manager.h"
#include"staff.h"
#include"parttime.h"
#include"fulltime.h"
void main()
{
	{
		

		char n[30];
		char nn[30];
		int h=0;
		int hh = 0;
		double hhh = 0;


		FILE *marks = fopen("r.txt", "r");
		if (marks == NULL)
		{
			printf("Error!");
			exit(1);
		}

		char *hasan=new char[999];
		int i=0;
		while (!feof(marks)){fgets(hasan,999,marks); i++; }

		fclose(marks);

		marks = fopen("r.txt", "r");
		if (marks == NULL)
		{
			printf("Error!");
			exit(1);
		}

	
		Emp **emp=new Emp*[i];
		int j=0;
		while (!feof(marks)) {
			fscanf(marks, "%s",n);
			if(!strcmp(n,"Staff"))
			{
			fscanf(marks, "%s %d %d",nn,&h,&hh);
			emp[j++]=new Staff(nn,h,hh);
			cout<<emp[j-1]->getWorkers()<<"		Monthly Pay:	"<<emp[j-1]->MonthPay()<<"		Annual Pay:	"<<emp[j-1]->AnnualPay()<<"\n";
			}
			
			if(!strcmp(n,"Manager"))
			{
			fscanf(marks, "%s %d %d",nn,&h,&hh);
			emp[j++]=new manager(nn,h,hh);
			cout<<emp[j-1]->getWorkers()<<"		Monthly Pay:	"<<emp[j-1]->MonthPay()<<"		Annual Pay:	"<<emp[j-1]->AnnualPay()<<"\n";
			}
			
			if(!strcmp(n,"Parttime"))
			{
			fscanf(marks, "%s %d %d %lf",nn,&h,&hh,&hhh);
			emp[j++]=new parttime(nn,h,hh,hhh);
			cout<<emp[j-1]->getWorkers()<<"		Monthly Pay:	"<<emp[j-1]->MonthPay()<<"		Annual Pay:	"<<emp[j-1]->AnnualPay()<<"\n";
			}
		
			if(!strcmp(n,"Fulltime"))
			{
			fscanf(marks, "%s %d %d %lf",nn,&h,&hh,&hhh);
			emp[j++]=new fulltime(nn,h,hh,hhh);
			cout<<emp[j-1]->getWorkers()<<"		Monthly Pay:	"<<emp[j-1]->MonthPay()<<"		Annual Pay:	"<<emp[j-1]->AnnualPay()<<"\n";
			}
			
		}		
		        fclose(marks);
				


    }
	system("pause");
}