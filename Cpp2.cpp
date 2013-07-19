#include <stdio.h










void order (int *a, int n)
{
	int i,j,k,temp;
	for (i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(a[k]>a[j]) 
				k=j; 
			if(i!=k) 
			{
				temp=a[i];
				a[i]=a[k];
				a[k]=temp;
			}
	}