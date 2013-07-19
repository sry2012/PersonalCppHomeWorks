/***************************************************
//功能：演示如何建立一个简单的菜单
//编写者：王灿辉，版本号：1.0，编写时间：2011-1-6
****************************************************/

#include <stdio.h>
#include <ctype.h>    //toupper
#include <string.h>   //strchr
#include <conio.h>    //getche

#define S_NUM 35      //选择菜单表头的星号数目
#define MAX_MENU 255  //功能选择菜单的最大行数

//显示表头的n个字符(ch)
inline void show_table_head(int n,char ch);
//显示功能选择菜单
//入口参数：存放允许用户选择的所有(大写)字符，格式形如：“A,B,C,D,Q”
void show_menu(char *);
//获得用户的选择。返回值：用户按下的字符(被转为大写)
char get_choice(void);

void main(void) {
  char choice;    //用户按下的字符(被转为大写)
  while ((choice=get_choice())!='Q') {
    switch (choice) {
    case 'I':
      printf("\a\n输入信息。\n\n");
      break;
    case 'O':
      printf("\a\n输出信息。\n\n");
      break;
    case 'T':
      printf("\a\n输出统计信息。\n\n");
      break;
    case 'F':
      printf("\a\n查找并输出信息。\n\n");
      break;
    case 'D':
      printf("\a\n查找并删除信息。\n\n");
      break;
    }
  }
}

//显示表头的n个字符(ch)
inline void show_table_head(int n,char ch) {
  if (n<1) return;
  for (int i=0;i<n;i++)
    putchar(ch); 
  putchar('\n');
}

//显示功能选择菜单
//入口参数：存放允许用户选择的所有(大写)字符，格式形如：“A,B,C,D,Q”
void show_menu(char *select_str) {
  //存放功能选择菜单，要求：每行的第一个字符必须为选择字符，最后一行一般是“Q:退出系统”！
  const static char *menu[]={
    "I:输入信息",
    "O:输出信息",
    "T:输出统计信息",
    "F:查找并输出信息",
    "D:查找并删除信息",
    "Q:退出系统"
  };
  
  show_table_head(S_NUM,'*');   //显示E_NUM个'*'
  
  for (int i=0,j=0;i<sizeof(menu)/sizeof(menu[0]);i++) {
    printf("%-4s%-*s*\n","*",S_NUM-5,menu[i]);
    if (i>0) select_str[j++]=',';
    select_str[j++]=toupper(menu[i][0]);
  }
  select_str[j++]='\0';
  
  show_table_head(S_NUM,'*');   //显示E_NUM个'*'
  
  printf("请选择(%s):",select_str);
}

//获得用户的选择。返回值：用户按下的字符(被转为大写)
char get_choice(void) {
  char select_str[MAX_MENU*2];
  //存放允许用户选择的所有(大写)字符，格式形如：“A,B,C,D,Q”
  char choice;
  while (1) {
    show_menu(select_str);      //显示功能选择菜单
    choice=toupper(getche());   //非缓冲有回显输入
    putchar('\n');
    if (strchr(select_str,choice)&&choice!=',') break;
    printf("\a\n选择错误，请重新选择......\n\n");
  }
  return choice;
}
