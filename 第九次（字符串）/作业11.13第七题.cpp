#include <stdio.h>
#include <string.h>
#define size 90
#define Quit "quit"
void output (char *a,char*b,int n, int m); 
int main ()
{
    char input[size],order[size];
	printf ("���������ڼ�����ַ�����");
	gets(order);
    printf ("�������ַ�����");
	gets (input);
	while (input!=Quit)
	{
		output (input,order, strlen(order), strlen(input));
		printf ("�������ַ�����");
		gets(input);
	}
	return 0;
}
void output (char *a,char*b,int n,int m)
{ 
	int i,count;
	count=0;
	for (i=0; i<m;i++)
	{
		if (*(a+i)==*b)
		{
			b+=1;
		    count++;
			if (count==n)
				break;
		}
	}
	if (count==n)
		printf ("����\n");
	else printf ("������\n");
}

	
