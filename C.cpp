#include <stdio.h>
int main ()
{
	int digit,x,input;
	printf ("������һ��������");
	scanf ("%d", &input);
    for (digit=input%10,x=input/10; ;)
	{
		printf("%d ", digit);
		if (x==0)
			break;
		digit=x%10;
		x=x/10;
	}
	putchar ('\n');
	return 0;
}
