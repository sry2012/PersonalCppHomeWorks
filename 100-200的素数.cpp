#include <stdio.h>
#include <math.h>
void sushu (int a);
int main ()
{
	int a;
	for (a=100;a<=200;a++)
	{
	    sushu (a);
	}
	return 0;
}
void sushu (int a)
{
	int digit,i;
	digit = sqrt(a);
	for (i=2;i<=digit;i++)
	{
		if (a%i==0)
			break;
	}
	if (i>digit)
		printf ("%dÊÇËØÊı¡£\n", a);
}
