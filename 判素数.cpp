#include <stdio.h>
#include <math.h>
int main ()
{
	int input,i;
	scanf ("%d",&input);
	if (input!=1)
	{
		i= sqrt(input);
		for (int n=2; n<=i ; n++)
		{
			if (input%n==0)
				break;
		}
		if (n>i)
			printf ("是素数。\n");
		else printf ("不是素数。\n");
	}
	return 0;
}