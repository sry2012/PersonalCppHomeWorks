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
			printf ("��������\n");
		else printf ("����������\n");
	}
	return 0;
}