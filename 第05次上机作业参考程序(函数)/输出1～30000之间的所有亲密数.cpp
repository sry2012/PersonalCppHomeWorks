//输出1～30000之间的所有"亲密数"。
//一个数A的所有因子之和为B，而B的所有因子之和正好是A，则称A和B是"亲密数"
//如果A又正好等于B，则称A为“完数”，如：6=1+2+3则为“完数”。

//220和284是"亲密数"。
//220的所有因子之和：1+2+4+5+10+11+20+22+44+55+110=284
//284的所有因子之和：1+2+4+71+142=220

#include <stdio.h>

#define MAX 30000

//计算给定正整数的所有因子之和
unsigned int func(unsigned int n) {
  for (unsigned int s=0,i=1;i<=n/2;i++)
    if (n%i==0) s+=i;
    return s;
}

void main(void)
{
  for (unsigned a=1;a<=MAX;a++) {
    if (func(func(a))==a) 
      printf("%d\t%d\n",a,func(a));
  }
}
