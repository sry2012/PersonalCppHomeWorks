#include <stdio.h>
#define size 20
int main ()
{
	int input[size],sum=0;
	printf ("������20����\n");
    for (int i=0;i<size;i++)
	{
		printf ("�������%d������", i+1);
		scanf ("%d", &input[i]);
		sum=input[i]+sum;
	}
	printf ("�����20�����ĺ�Ϊ%d��\n", sum);
	return 0;
} 
		
