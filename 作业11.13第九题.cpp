#include <stdio.h>
#include <string.h>
#define Quit "quit"
#define Delete ' ' 
#define size 90
void output (char *a, int n, char b);
int main ()
{
	int num;
	char input[size];
	printf ("ÇëÊäÈë×Ö·û´®:");
	gets (input);
	num= strlen(input);
	while (input != Quit)
	{
		output (input, num, Delete);
		printf ("ÇëÊäÈë×Ö·û´®:");
		gets(input);
		num=strlen(input);
	}
	return 0;
}
void output (char *a, int n, char b)
{
	int i;
	for (i=0; i<n;i++)
	{
		if (*(a+i)!=b)
		{
			printf ("%c", *(a+i));
		}
		else if (*(a+i)==b)
		{
			for (;i<n; i++)
			{
				if (*(a+i+1)!=b)
				{
					*(a+i)=*(a+i+1);
					i++;
					break;
				}
			}
			printf ("%c", *(a+i));	
		}
	}
	putchar('\n');
}

