#include <stdio.h>
#define SIZE 3
#define SIZE2 5
int main ()
{
	int n,m;
	double ave[4];
	double sum=0;
	double input[SIZE][SIZE2];
	double max;
	printf ("���������ݣ�");
	for (n=0;n<SIZE;n++)
	{
		for (m=0;m<SIZE2;m++)
		{
			scanf ("%lf", &input[n][m]);
			sum=sum+input[n][m];
		}
		
		ave[n]=sum/SIZE2;
		printf ("%d�������ƽ������%lf.\n", n+1, ave[n]);
		printf ("��������һ�����ݣ�\n");
		
		sum=0;
	}
	for (n=0;n<SIZE;n++)
		sum=sum+ave[n];
	ave[3]=sum/3;
	printf ("��������ݵ�ƽ������%lf.\n", ave[3]);
	max=input[0][0];
	for (n=0;n<SIZE;n++)
	{
		for (m=0;m<SIZE2;m++)
			max=(max>input[n][m])?max:input[n][m];
	}
	printf ("��������ݵ����ֵΪ%lf.\n", max);
	return 0;
}
