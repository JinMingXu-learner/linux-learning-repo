#include <stdio.h>
#include "func.h"

double method1(double a,double b,unsigned int n)
{
	double s=(b-a)/n;
	double sum=0,t;
	for(t=a;t<b;t=t+s)
	{
		sum+=func(t)*s;
	}
	return sum;
}
