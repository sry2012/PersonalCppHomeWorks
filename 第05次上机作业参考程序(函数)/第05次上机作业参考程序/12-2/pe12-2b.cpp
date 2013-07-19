#include <stdio.h>
#include "pe12-2.h"

int main()
{
  int mode;
  
  printf("Enter 0 for metric mode,1 for US mode: ");
  scanf("%d",&mode);
  while(mode>=0) {
    set_mode(mode);
    get_info();
    show_info();
    printf("Enter 0 for metric mode,1 for US mode: ");
    scanf("%d",&mode);
  }
  printf("Done.\n");
  return 0;
}