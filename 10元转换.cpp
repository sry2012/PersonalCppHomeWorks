#include <stdio.h>
#define ALL 100
int main ()
{
	int c1,c2,c5;
	for (c5=1; c5<20;c5++)
	{
		for (c2=1;c2<50;c2++)
		{
			if (c5*5+c2*2>=100)
				break;
			c1=100-c5*5-c2*2;
		    printf ("一种方案是%d个5毛，%d个两毛，%d个一毛。\n", c5,c2,c1);
		}
	}
	return 0;
}