//�õݹ鷽��ʵ����ͣ�1+2+......+n
#include <stdio.h>

int f(int n) {
  if (n<=0) return 0;
  return n+f(n-1);
}

void main(void) {
  printf("%d\n",f(10));
}
