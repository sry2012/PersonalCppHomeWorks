//“打鱼还是晒网”。某人从2000年1月1日20岁开始“三天打鱼两天晒网”，问某天该人在打鱼还是在晒网。
#include<stdio.h>

//从那一年开始“三天打鱼两天晒网”
#define YEAR 2000 
//开始“三天打鱼两天晒网”的年龄
#define AGE 20
//可以“三天打鱼两天晒网”的最大年龄
#define MAX_AGE 100

//判指定年份(year)是否为闰年？
inline bool isLeapYear(int year);
//获得指定年(year)、月(month)对应的天数，如：2011年5月有31天
//错误条件：如果月份错误则返回-1
int getDaynumOfMonth(int year,int month);

int main(void)
{
  int i,y,m,d;
  
  while (1) {
    
    printf("请输入日期（年.月.日），用q退出：");
    if (scanf("%d.%d.%d",&y,&m,&d)!=3) break;
    while (getchar()!='\n');
    //跳过该行的其他输入和<回车>键
    
    if (y<YEAR-AGE) {
      puts("那一年他还没有出生！");
      continue;
    }
    if (y<YEAR) {
      puts("那一年他还没有开始打鱼！");
      continue;
    }
    if (y-YEAR>MAX_AGE) {
      printf("他已经超过%d岁，还能打鱼？\n",MAX_AGE);
      continue;
    }
    if (m<1||m>12) {
      puts("月份只能在1～12之间");
      continue;
    }
    if (d<1) {
      puts("日期必须大于0！");
      continue;
    }
    int days=getDaynumOfMonth(y,m);
    if (d>days) {
      printf("%d年%d月只有%d天！\n",y,m,days);
      continue;
    }
    
    days=d;
    //加上前面几年的天数，每年365天或366天（闰年）
    for (i=y-1;i>=YEAR;i--)
      days+=365+isLeapYear(i);
    
    //加上前面几个月的天数
    for (i=m-1;i>=1;i--)
      days+=getDaynumOfMonth(y,i);
    
    days %= 5;
    if (days==1||days==2||days==3)
      puts("他正在打鱼...");
    else
      puts("他正在晒网...");
  }
  
  return 0;
}

//判指定年份(year)是否为闰年？
inline bool isLeapYear(int year) {
  return (year%4==0 && year%100!=0)||(year%400==0);
}

//获得指定年(year)、月(month)对应的天数，如：2011年5月有31天
//错误条件：如果月份错误则返回-1
int getDaynumOfMonth(int year,int month) {
  static const int day_num[]={31,-1,31,30,31,30,31,31,30,31,30,31};
  if (month<1 || month>12) return -1;  //月份错误
  if (month!=2)
    return day_num[month-1];
  else
    return (isLeapYear(year)?29:28);
}


/*********************************************
程序的运行过程和输出结果如下：

请输入日期（年.月.日），用q退出：1977.7.7
那一年他还没有出生！
请输入日期（年.月.日），用q退出：1988.8.8
那一年他还没有开始打鱼！
请输入日期（年.月.日），用q退出：2111.1.1
他已经超过100岁，还能打鱼？
请输入日期（年.月.日），用q退出：2000.0.1
月份只能在1～12之间
请输入日期（年.月.日），用q退出：2000.1.0
日期必须大于0！
请输入日期（年.月.日），用q退出：2000.2.30
2000年2月只有29天！
请输入日期（年.月.日），用q退出：2000.1.1
他正在打鱼...
请输入日期（年.月.日），用q退出：2000.1.3
他正在打鱼...
请输入日期（年.月.日），用q退出：2000.1.4
他正在晒网...
请输入日期（年.月.日），用q退出：2000.1.5
他正在晒网...
请输入日期（年.月.日），用q退出：2000.1.6
他正在打鱼...
请输入日期（年.月.日），用q退出：2000.2.1
他正在打鱼...
请输入日期（年.月.日），用q退出：2000.2.3
他正在晒网...
请输入日期（年.月.日），用q退出：2001.1.1
他正在打鱼...
请输入日期（年.月.日），用q退出：2001.1.2
他正在打鱼...
请输入日期（年.月.日），用q退出：2001.1.3
他正在晒网...
请输入日期（年.月.日），用q退出：2001.1.5
他正在打鱼...
请输入日期（年.月.日），用q退出：2011.10.10
他正在打鱼...
请输入日期（年.月.日），用q退出：q
Press any key to continue
**********************************************/