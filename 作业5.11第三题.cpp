#include <stdio.h>
int main ()
{
	int days1,days2,week;
	printf ("������������");
	while (scanf ("%d",&days1)==1)
	{
		week=days1/7;
		days2=days1%7;
		printf ("����������ϼ�%d��%d�졣\n", week, days2);
		printf ("����дһ��������q�˳���");
	}
	return 0;
}
