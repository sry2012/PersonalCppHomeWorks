/*
给定整数N(2=<N<=8)，产生所有其前任意位都是质数的N位质数。
如：7331就是一个这样的4位质数，因为7、73、733都是质数。
要求：按升序输出所有符合要求的质数。
例如：输入N=2，则必须按序输出下面的9个质数：
23 29 31 37 53 59 71 73 79
*/
#include <stdio.h>

//判n是否为质数，是返回真否则返回假。
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
  printf("请输入一个2～8之间的整数：");
  scanf("%d",&n);
  if  (n<2||n>8) {
    puts("输入的整数不在2～8之间！");
    return -1;
  }
  
  //计算下界（10^n-1）和上界(10^n)
  long int i=0,down=10;
  for (i=n-1;i>1;i--) down*=10;
  long int up=down*10;
  
  int count=0; //符合要求的质数的数目
  for (i=down;i<up;i++) {
    if (isPrime(i)) { //i是质数
      //判其前任意位是质数？
      for (long int prime=i,j=down;j>=10;j/=10) {
        if (!isPrime(prime/j)) break;
      }
      if (j<10) {//其前任意位都是质数
        printf("%d\t",i); //输出
        count++; 
      }
    }
  }
  printf("\n符合要求的%d位质数共有%d个。\n",n,count);
  
  return 0;
}