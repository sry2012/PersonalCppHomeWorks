#include<stdio.h>

int gcd(int x,int y);

void main(void)
{
  int x,y;
  printf("������������:");
  scanf("%d%d",&x,&y);
  printf("%d��%d�����Լ����:%d\n",x,y,gcd(x,y));
}

int gcd(int x,int y)
{
  if(y==0)
    return x;
  return gcd(y,x%y);
}