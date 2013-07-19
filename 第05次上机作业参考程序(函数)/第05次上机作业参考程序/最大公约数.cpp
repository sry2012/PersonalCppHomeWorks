#include<stdio.h>

int gcd(int x,int y);

void main(void)
{
  int x,y;
  printf("请输入两个数:");
  scanf("%d%d",&x,&y);
  printf("%d和%d的最大公约数是:%d\n",x,y,gcd(x,y));
}

int gcd(int x,int y)
{
  if(y==0)
    return x;
  return gcd(y,x%y);
}