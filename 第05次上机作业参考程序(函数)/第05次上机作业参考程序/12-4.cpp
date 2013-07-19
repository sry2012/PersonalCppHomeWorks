#include<stdio.h>

int cnt(void);

void main(void)
{
  for(int i=1;i<10;i++)
    printf("%d:%d\n",i,cnt());
}

int cnt(void)
{
  static int ret=0;
  return ++ret;
}