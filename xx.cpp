#include <stdio.h>
#define LIM 1e-5
int main ()
{
	double i,sum,x,x2;
	int flag=1;
	sum=0;
	for (i=1.0,x=x2=1.0/i ; x2>LIM ;)
	{
		sum=x+sum;
		i=i+2;
		flag=-flag;
		x=(1.0/i)*flag;
		x2=(x>0)?x:-x;
	}
	printf ("%lf\n",sum);
	return 0;
}

