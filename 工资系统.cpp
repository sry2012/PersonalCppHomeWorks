#include <stdio.h>
#include <stdlib.h>
#define SIZE 11 //����������֧������
#define SEX_size 3
#define SIZE2 4 //����Ա���ŵĳ���
#define AGE_low 16//����Ա������С����
#define AGE_max 60//����Ա�����������
#define MAX_YG 100 //����Ա�����������
struct Staff {
    int staff_n;//����Ա����
	char name[SIZE];
	char sex[SEX_size];
	int age;
	float wage;
	float bc; 
	float dk;//
	float all_income;//Ա����������
};//����Ա��������
void menu ();
void function (char ch, Staff *s, int count,FILE *fp);//���ܵ�ѡ�� 
void inputinfo (struct Staff *s,int count,FILE *fp);//����Ա������Ϣ 
void outputinfo (Staff *s,int count);//���Ա������Ϣ 
void showinfo (struct Staff *s);
void sort (struct Staff *s, int count);//����Ĺ���ѡ�� 
void sort_number (struct Staff *s,int count);//��Ա��������
int main ()
{
	int count=0;
	char choice;
	struct Staff s[MAX_YG];
	FILE *fp;
	if ((fp=fopen("������Ϣ.txt","a+"))==NULL)
	{
		printf ("�޷���\n");
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
	printf ("*   (i)����Ա����Ϣ                          *\n");
	printf ("*   (o)���Ա����Ϣ                          *\n");
	printf ("*   (a)����Ա����Ϣ                          *\n");
	printf ("*   (s)������Ϣ                              *\n");
	printf ("*   (q)�˳�����                              *\n");
	printf ("**********************************************\n");
	printf ("������\n");
}
void function (char ch,Staff *s, int count,FILE *fp)
{
	

}
void inputinfo (struct Staff *s,int count,FILE *fp)
{
	printf ("ע�⣡\n1.Ա����Ա������4λ���ֲ������5000,Ա���Ų������ظ�\n2.Ա��������Ӧ��16~60֮��\n");
	printf ("3.����Ӧ��5�����ڵĺ���\n4.���ʣ����ۣ�������<=0\n"); 
	printf ("������Ա���ţ�");
	scanf ("%d", &(*s).staff_n);
	while (getchar ()!='\n')
		continue;
	printf ("������Ա�������֣�");
	gets((*s).name);
	printf ("������Ա�����Ա�");
	gets ((*s).sex);
	printf ("������Ա�������䣨16~60����");
	scanf ("%d", &(*s).age);
	printf ("������Ա������н��");
	scanf ("%f",&(*s).wage);
	printf ("������Ա���Ĳ�����");
	scanf ("%f",&(*s).bc);
	printf ("������Ա���Ĵ��ۣ�");
	scanf ("%f", &(*s).dk);
    (*s).all_income=(*s).bc+(*s).wage+(*s).dk;
	puts ("\n\n");
	while (getchar ()!='\n')
		continue;
}
void outputinfo (struct Staff *s,int count)
{
	printf ("%d",count);
	printf ("���Ա������Ϣ��\n");
	printf ("Ա����   ����   �Ա�    ����   ����     ����     ����    ������\n");
	for (int i=0;i<count;i++)
	{
		showinfo (&s[i]);
	}
	printf ("\n\n");
	while (getchar ()!='\n')
		continue;
}
void showinfo (struct Staff *s)//�������Ա������Ϣ 
{
	printf ("%d %7s %7s %7d ",(*s).staff_n,(*s).name,(*s).sex,(*s).age);
    printf ("%7.2f %7.2f %7.2f %7.2f\n",(*s).wage,(*s).bc,(*s).dk,(*s).all_income);
}
void sort (struct Staff *s, int count)
{   
    char ch;
    printf ("��ѡ������ı�׼��");
    printf ("**********************************************\n");
    printf ("*a.��Ա���Ŵ�С   b.�����ʴ�С               *\n");
    printf ("*c.���������С   d.�������С               *\n"); 
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
void swap (struct Staff *s,struct Staff *a)//���ڽ���Ա������Ϣ 
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
