#include <stdio.h>
int main ()
{
	int min,index,i,k,a[10]={12,3,5,7,4,11,56,23,31,10};
	for (i=0;i<10;i++)
	{
		index=i;
		for (k=i;k<10;k++)
		{
			if (a[index]>a[k])
				index=k;
			min=a[index];
		}
		a[index]=a[i];
        a[i]=min;
		
	}
	for (i=0;i<10;i++)
		printf ("%d  ", a[i]);
	putchar ('\n');
	return 0;
}

