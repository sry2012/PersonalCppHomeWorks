/*
��������N(2=<N<=8)������������ǰ����λ����������Nλ������
�磺7331����һ��������4λ��������Ϊ7��73��733����������
Ҫ�󣺰�����������з���Ҫ���������
���磺����N=2������밴����������9��������
23 29 31 37 53 59 71 73 79
*/
#include <stdio.h>

//��n�Ƿ�Ϊ�������Ƿ�������򷵻ؼ١�
int isPrime(long int n) 
{
  if (n<2) return false;
  for (long int i=2;i*i<=n;i++) {
    if (n%i==0) return false;
  }
  return true;
}

int main(void)
{
  int n=0;
  printf("������һ��2��8֮���������");
  scanf("%d",&n);
  if  (n<2||n>8) {
    puts("�������������2��8֮�䣡");
    return -1;
  }
  
  //�����½磨10^n-1�����Ͻ�(10^n)
  long int i=0,down=10;
  for (i=n-1;i>1;i--) down*=10;
  long int up=down*10;
  
  int count=0; //����Ҫ�����������Ŀ
  for (i=down;i<up;i++) {
    if (isPrime(i)) { //i������
      //����ǰ����λ��������
      for (long int prime=i,j=down;j>=10;j/=10) {
        if (!isPrime(prime/j)) break;
      }
      if (j<10) {//��ǰ����λ��������
        printf("%d\t",i); //���
        count++; 
      }
    }
  }
  printf("\n����Ҫ���%dλ��������%d����\n",n,count);
  
  return 0;
}