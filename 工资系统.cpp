#include <stdio.h>
#include <stdlib.h>
#define SIZE 11 //定义姓名的支付长度
#define SEX_size 3
#define SIZE2 4 //定义员工号的长度
#define AGE_low 16//定义员工的最小年龄
#define AGE_max 60//定义员工的最大年龄
#define MAX_YG 100 //定义员工的最大人数
struct Staff {
    int staff_n;//定义员工号
	char name[SIZE];
	char sex[SEX_size];
	int age;
	float wage;
	float bc; 
	float dk;//
	float all_income;//员工的总收入
};//定义员工的类型
void menu ();
void function (char ch, Staff *s, int count,FILE *fp);//功能的选择 
void inputinfo (struct Staff *s,int count,FILE *fp);//输入员工的信息 
void outputinfo (Staff *s,int count);//输出员工的信息 
void showinfo (struct Staff *s);
void sort (struct Staff *s, int count);//排序的功能选择 
void sort_number (struct Staff *s,int count);//按员工号排序
int main ()
{
	int count=0;
	char choice;
	struct Staff s[MAX_YG];
	FILE *fp;
	if ((fp=fopen("工资信息.txt","a+"))==NULL)
	{
		printf ("无法打开\n");
		exit (1);
	}
	menu ();
	while ((choice=getchar())!='q')
	{
		switch (choice)
	{
	    case 'i':
	  	inputinfo (&s[count],count,fp);printf ("%s",s[count].name);count=count+1;break;
	    case 'o':
		outputinfo (s,count);break;
		case 'a':
		sort (s,count);break;
		
	}
	
	    menu ();
	}
	return 0;
}
void menu ()//
{
	printf ("**********************************************\n");
	printf ("*   (i)输入员工信息                          *\n");
	printf ("*   (o)输出员工信息                          *\n");
	printf ("*   (a)排序员工信息                          *\n");
	printf ("*   (s)查找信息                              *\n");
	printf ("*   (q)退出程序                              *\n");
	printf ("**********************************************\n");
	printf ("请输入\n");
}
void function (char ch,Staff *s, int count,FILE *fp)
{
	

}
void inputinfo (struct Staff *s,int count,FILE *fp)
{
	printf ("注意！\n1.员工的员工号是4位数字并不错过5000,员工号不允许重复\n2.员工的年龄应在16~60之间\n");
	printf ("3.姓名应是5个以内的汉字\n4.工资，代扣，补偿都<=0\n"); 
	printf ("请输入员工号：");
	scanf ("%d", &(*s).staff_n);
	while (getchar ()!='\n')
		continue;
	printf ("请输入员工的名字：");
	gets((*s).name);
	printf ("请输入员工的性别：");
	gets ((*s).sex);
	printf ("请输入员工的年龄（16~60）：");
	scanf ("%d", &(*s).age);
	printf ("请输入员工的月薪：");
	scanf ("%f",&(*s).wage);
	printf ("请输入员工的补贴：");
	scanf ("%f",&(*s).bc);
	printf ("请输入员工的代扣：");
	scanf ("%f", &(*s).dk);
    (*s).all_income=(*s).bc+(*s).wage+(*s).dk;
	puts ("\n\n");
	while (getchar ()!='\n')
		continue;
}
void outputinfo (struct Staff *s,int count)
{
	printf ("%d",count);
	printf ("输出员工的信息：\n");
	printf ("员工号   姓名   性别    年龄   工资     补偿     代扣    总收入\n");
	for (int i=0;i<count;i++)
	{
		showinfo (&s[i]);
	}
	printf ("\n\n");
	while (getchar ()!='\n')
		continue;
}
void showinfo (struct Staff *s)//用于输出员工的信息 
{
	printf ("%d %7s %7s %7d ",(*s).staff_n,(*s).name,(*s).sex,(*s).age);
    printf ("%7.2f %7.2f %7.2f %7.2f\n",(*s).wage,(*s).bc,(*s).dk,(*s).all_income);
}
void sort (struct Staff *s, int count)
{   
    char ch;
    printf ("请选择排序的标准：");
    printf ("**********************************************\n");
    printf ("*a.按员工号大小   b.按工资大小               *\n");
    printf ("*c.按总输入大小   d.按年龄大小               *\n"); 
    printf ("**********************************************\n");
    switch (ch)
	{
		case 'a':
		sort_number (s,count); 
		
		
	} 
}
void sort_number (struct Staff *s,int count)
{
	struct Staff n;
	int paixun;
	for (int i=0;i<count;i++)
	{
		paixun=max_num (s,count);
		if ((*s).staff_n!=paixun)
		swap (s,)

		
		
		
		

	
} 
void swap (struct Staff *s,struct Staff *a)//用于交换员工的信息 
{
	struct Staff b=*s;
	*s=*a;
	*a=b;
} 
struct Staff max_num (struct Staff *s,int count)
{
    struct Staff max_num;
	for (int i=0;i<count;i++)
	{
		if ((*s).staff_n>(*(s+1)).staff_n)
		max_num=(*s)
		else max_num=*(s+1)
	}
	return max_num;
}
