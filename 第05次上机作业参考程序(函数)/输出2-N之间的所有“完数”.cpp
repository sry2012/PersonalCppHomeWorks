//���2-N֮�������"����"������һ�������õ���������֮�ͣ��磺6=1+2+3

#include <stdio.h>

//�и������������Ƿ���"����"
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
