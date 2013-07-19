#include<stdio.h>

static int mode;
static double dis,fuel;

void set_mode(int m)
{
  if(m>1) {
    printf("Invalid mode specified. Mode 1(US) used.\n");
    m=1;
  }
  mode=m;
}

void get_info(void)
{
  printf("Enter distance trvalled in");
  if(mode==0)
    printf(" kilometers: ");
  else
    printf(" miles: ");
  scanf("%lf",&dis);
  printf("Enter fuel consumed in ");
  if(mode==0)	
    printf("liters: ");
  else
    printf("gallons: ");
  scanf("%lf",&fuel);
}

void show_info(void)
{
  if(mode==0)
    printf("Fuel consumption is %.2lf liters per 100 km.\n",fuel/dis*100);
  else
    printf("Fuel consumption is %.1lf miles per gallon.\n",dis/fuel);
}