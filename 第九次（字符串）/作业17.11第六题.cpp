#include <stdio.h>
#define SIZE 10
void order (int *a, int n);
int search (int *a, int n, int b);
int main ()
{
	int input[SIZE], num,i;
	printf ("请输入10个数据:");
	for (i=0;i<10;i++)
		scanf ("%d", &input[i]);
	order (input, SIZE);
	for (i=0;i<num; i++)
		printf ("%d  ", input[i]);
	putchar ('\n');
	printf ("请输入要查找的数：");
	scanf ("%d", &num);
	i=search (input, SIZE, num);
	if (i==1)
		printf ("该数在数组中\n");
	else if (i==0)
		printf ("该数不在数组中\n");

	return 0;
}
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
} 
int search (int *a, int n, int b)
{
     int i,num=0;
	 for (i=0;i<n; i++)
	 {
		 if (*(a+i)==b)
		 {
			 num=1;
			 break;
		 }
	 }
	 return num;
}

			

