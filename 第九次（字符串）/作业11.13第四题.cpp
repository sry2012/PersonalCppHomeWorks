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
	printf ("请输入字符串：");
	gets (input);
	printf ("请输入要要查找的字符：");
	scanf ("%c", &order);
	num=strlen(input);
	while (input!=Stop)
	{
		pr= search (input, order, num);
		if (pr==-1)
			printf ("要查找的字符不在其中.\n");
		else if (pr==1) 
			printf ("要查找的字符%c在字符串中.\n", order);
		
		printf ("请输入字符串：");
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

