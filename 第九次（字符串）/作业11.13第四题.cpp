#include <stdio.h>
#include <string.h>
#define size 90
#define Stop "stop"
int search (char *a, char b, int n);
int main ()
{
	char input[size], order;
	int num;
    int pr;
	printf ("�������ַ�����");
	gets (input);
	printf ("������ҪҪ���ҵ��ַ���");
	scanf ("%c", &order);
	num=strlen(input);
	while (input!=Stop)
	{
		pr= search (input, order, num);
		if (pr==-1)
			printf ("Ҫ���ҵ��ַ���������.\n");
		else if (pr==1) 
			printf ("Ҫ���ҵ��ַ�%c���ַ�����.\n", order);
		
		printf ("�������ַ�����");
		gets (input);
		num=strlen(input);
	}
	return 0;
}
int search (char *a, char b, int n)
{
	int i,num;
	for (i=0; i<n; i++)
	{
		if (*(a+i)==b)
		{	num=1;
		    break;
		}
		
	}
	return num;
	
}

