/***************************************************
//���ܣ���ʾ��ν���һ���򵥵Ĳ˵�
//��д�ߣ����ӻԣ��汾�ţ�1.0����дʱ�䣺2011-1-6
****************************************************/

#include <stdio.h>
#include <ctype.h>    //toupper
#include <string.h>   //strchr
#include <conio.h>    //getche

#define S_NUM 35      //ѡ��˵���ͷ���Ǻ���Ŀ
#define MAX_MENU 255  //����ѡ��˵����������

//��ʾ��ͷ��n���ַ�(ch)
inline void show_table_head(int n,char ch);
//��ʾ����ѡ��˵�
//��ڲ�������������û�ѡ�������(��д)�ַ�����ʽ���磺��A,B,C,D,Q��
void show_menu(char *);
//����û���ѡ�񡣷���ֵ���û����µ��ַ�(��תΪ��д)
char get_choice(void);

void main(void) {
  char choice;    //�û����µ��ַ�(��תΪ��д)
  while ((choice=get_choice())!='Q') {
    switch (choice) {
    case 'I':
      printf("\a\n������Ϣ��\n\n");
      break;
    case 'O':
      printf("\a\n�����Ϣ��\n\n");
      break;
    case 'T':
      printf("\a\n���ͳ����Ϣ��\n\n");
      break;
    case 'F':
      printf("\a\n���Ҳ������Ϣ��\n\n");
      break;
    case 'D':
      printf("\a\n���Ҳ�ɾ����Ϣ��\n\n");
      break;
    }
  }
}

//��ʾ��ͷ��n���ַ�(ch)
inline void show_table_head(int n,char ch) {
  if (n<1) return;
  for (int i=0;i<n;i++)
    putchar(ch); 
  putchar('\n');
}

//��ʾ����ѡ��˵�
//��ڲ�������������û�ѡ�������(��д)�ַ�����ʽ���磺��A,B,C,D,Q��
void show_menu(char *select_str) {
  //��Ź���ѡ��˵���Ҫ��ÿ�еĵ�һ���ַ�����Ϊѡ���ַ������һ��һ���ǡ�Q:�˳�ϵͳ����
  const static char *menu[]={
    "I:������Ϣ",
    "O:�����Ϣ",
    "T:���ͳ����Ϣ",
    "F:���Ҳ������Ϣ",
    "D:���Ҳ�ɾ����Ϣ",
    "Q:�˳�ϵͳ"
  };
  
  show_table_head(S_NUM,'*');   //��ʾE_NUM��'*'
  
  for (int i=0,j=0;i<sizeof(menu)/sizeof(menu[0]);i++) {
    printf("%-4s%-*s*\n","*",S_NUM-5,menu[i]);
    if (i>0) select_str[j++]=',';
    select_str[j++]=toupper(menu[i][0]);
  }
  select_str[j++]='\0';
  
  show_table_head(S_NUM,'*');   //��ʾE_NUM��'*'
  
  printf("��ѡ��(%s):",select_str);
}

//����û���ѡ�񡣷���ֵ���û����µ��ַ�(��תΪ��д)
char get_choice(void) {
  char select_str[MAX_MENU*2];
  //��������û�ѡ�������(��д)�ַ�����ʽ���磺��A,B,C,D,Q��
  char choice;
  while (1) {
    show_menu(select_str);      //��ʾ����ѡ��˵�
    choice=toupper(getche());   //�ǻ����л�������
    putchar('\n');
    if (strchr(select_str,choice)&&choice!=',') break;
    printf("\a\nѡ�����������ѡ��......\n\n");
  }
  return choice;
}
