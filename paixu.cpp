#include <stdio.h>
void paixu (int *a);
int main ()
{
	int a[10]={21,2,7,66,99,25,53,11,9,10};
	paixu (a);
	for (int i=0;i<10;i++)
		printf ("%d   ", a[i]);
	return 0;
}
void paixu (int *a)
{
	int n,i,index,max;
	for (n=0;n<10;n++)
	{
		index=n;
		for (i=n;i<10;i++)
		{
			if (a[i]>a[index])
				index=i;
			max=a[index];
		}
		a[index]=a[n];
		a[n]=max;
	}   
}