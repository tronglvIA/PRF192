/*
Suppose that:
In Viet Nam, each people has to pay for his/her yearly personal income tax as the following description:

Rules:

Tax-free income: 
    Personal pending amount (ti?n nu�i b?n th�n) pa= 9 000 000$/month
    Alimony (ti?n c?p du?ng) for each his/her dependent pd= 3 600 000$/month/dependent
   With n dependents, Yearly tax-free income: tf = 12*(pa + n*pd)

Taxable income (thu nh?p ch?u thu?) 
      ti = income � tf
 ( If ti<=0 then income tax = 0)
*/
#include<stdio.h>

int main(){
	// declarration constant Personnal pending amount(pa) and alomory(pd)
	const long pa = 9000000, pd = 3600000;
	// declaration variable with <n> are dependents and <tf> is the yearly tax-free icome and Taxable income is <ti>
	int n;
	long int tf, ti, income, incometax;
	printf("Input your yearly income = ");
	scanf("%ld", &income);
	printf("Please input the amount of dependents = ");
	scanf("%d", &n);
	tf = 12*(pa+n*pd);
//	printf("%ld \n", tf);
	ti = income - tf ;
//	printf("%ld", ti);
	
	if ( ti <= 0)
	{
		incometax = 0;
		printf("The income tax = %ld", incometax);	
   } else if(ti<=5000000)
          {  	incometax= 5000000*0.05;
          	 	printf("Income tax:%ld",incometax);
          }  else if(ti<=10000000)
                  {  		incometax= 5000000*0.05+ (ti-5000000)*0.1;
                  			printf("Income tax:%ld",incometax);
                  }  else if(ti<=18000000)
                          { 	 incometax=5000000*0.05+5000000*0.1+(ti-10000000)*0.15;
                          		printf("Income tax:%ld",incometax);
			              }  else 
			                {  incometax=5000000*0.05+5000000*0.1+8000000*0.15+(ti-18000000)*0.2;
						    		printf("Income tax:%ld",incometax);
							}  
						    

	getchar();
	return 0;
}
