#include <stdio.h>
#define size 21
#define size2 3
#define csize 4 //设置常量
void getinfo (struct Student *n);//声明要调用的函数
void showinfo (struct Student *a);//声明要调用的函数
struct Name {
	char frist[size];
	char last[size];
};//声明姓名结构
struct Student {
	struct Name handle;
	float grade[size2];
	float ave;
};//声明学生的结构
int main ()
{
	int i,n;
	float all_ave[size2],sum;
	struct Student s[csize];
    for (i=0;i<csize; i++)
		getinfo (&s[i]);//输入学生的信息
	for (i=0;i<size2;i++)//计算各个科目的平均分
	{
		for (n=0,sum=0;n<csize;n++)
			sum+=s[n].grade[i];
		all_ave[i]=sum/csize;
	}
	printf ("姓名      科目1      科目2     科目3    平均分\n");//打印表格
	for (i=0;i<csize; i++)
		showinfo (&s[i]);//输出的学生的信息
	for (i=0;i<size2;i++)
		printf ("科目%d的平均分是%f\n", i+1,all_ave[i]);//输出各个科目的平均分
	return 0;
}
void getinfo (struct Student *n)//定义输入信息的函数
{
	int i;
	printf ("请输入学生的姓：");
	gets ((*n).handle.frist);
	printf ("请输入学生的名字：");
	gets ((*n).handle.last);
	printf ("请输入该生的%d科成绩：", size2);
	for (i=0;i<size2;i++)
		scanf ("%f", &(*n).grade[i]);//输入学生的分数
	while (getchar()!='\n')
		continue;
	float sum;
	for (i=0,sum=0;i<size2;i++)//计算学生的平均分
		sum+=(*n).grade[i];
	(*n).ave=sum/size2;
}
void showinfo (struct Student *a)//定义输出信息的函数
{
	int i;
	printf ("%s%s   %", (*a).handle.frist,(*a).handle.last);
	printf ("%9.1f%9.1f%9.1f", (*a).grade[0],(*a).grade[1],(*a).grade[2]);
	printf ("%9.1f\n", (*a).ave);
}