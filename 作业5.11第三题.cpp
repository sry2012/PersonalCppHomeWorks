#include <stdio.h>
int main ()
{
	int days1,days2,week;
	printf ("请输入天数：");
	while (scanf ("%d",&days1)==1)
	{
		week=days1/7;
		days2=days1%7;
		printf ("输入的天数合计%d周%d天。\n", week, days2);
		printf ("输入写一个天数或q退出：");
	}
	return 0;
}
