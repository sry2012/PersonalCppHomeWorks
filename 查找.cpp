#include <stdio.h>
#define SIZE 5
int main ()
{
	int i,x, date[SIZE];
	printf ("������5��������");
	for (i=0;i<SIZE;i++)
		scanf ("%d", &date[i]);
	printf ("����������ҵ�����");
	scanf ("%d",&x);
	for (i=0;i<SIZE;i++)
		if (date[i]==x)
			printf ("Fond.\n");
    return 0;
}