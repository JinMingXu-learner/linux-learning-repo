#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double method2(double a,double b,unsigned int n)
{
	double x,sum=0,t=(b-a)/n;
	srand((unsigned int)time(NULL));
	unsigned int i=0;
	for(i=0;i<n;i++)
	{
		x=(a+(b-a)*rand()/(RAND_MAX));
		sum+=func(x)*t;
	}
	return sum;
}
