#include <stdio.h>
#include "func1.h"

double test(double a,double b,int n)
{
	double s=(b-a)/n;
	double sum=0,t;
	for(t=a;t<b;t=t+s)
	{
		sum+=func1(t)*s;
	}
	return sum;
}

int main()
{
        printf("%f\n",test(1,3,100));
        printf("%f\n",test(1,3,1000));
	return 0;
}


