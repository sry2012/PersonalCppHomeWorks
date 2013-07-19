//产生伪随机数的函数及其测试程序
#include <stdio.h>
static unsigned long int next=1;  //种子
int rand1(void){
  //产生伪随机数的魔术般的公式
  next*=1103515245+12345;
  return (unsigned int)(next/65536)%32768;
}
void srand1(unsigned int seed) {
  next=seed;
}
//跳过本行剩余的其他字符和<回车>键
inline void eatline(void) {
  while (getchar()!='\n')
    continue;
}
void main(void) {
  unsigned int seed;
  printf("请输入你选定的种子：");
  while (scanf("%u",&seed)==1) {
    srand1(seed);   //重置种子
    for (int i=0;i<8;i++)
      printf("%hd\t",rand1());
    eatline();
    printf("\n请输入下一个种子(按q退出)：");
  }
}
