//输出2-N之间的所有"完数"，即：一个数正好等于其因子之和，如：6=1+2+3

#include <stdio.h>

//判给定的正整数是否是"完数"
char func(int n) {
  for (int s=0,i=1;i<=n/2;i++)
    if (n%i==0) s+=i;
  return (s==n);
}

void main() {
  int i,n;
  printf("Input integer value(>=2) : ");
  scanf("%d",&n);

  if (n>=2)
    for (i=2;i<=n;i++) {
      if (func(i)) printf("%8d",i);
    }	
  else printf("Input value error !!!");
  printf("\n");
}
