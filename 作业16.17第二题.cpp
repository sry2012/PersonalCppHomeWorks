#include <stdio.h>
#define HMEAN(X,Y) (2.0 * (X) *(Y) / ((X) + (Y)))
int main(void)
{
    double x, y, ans;
    printf ("请输入两个实数：");
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        ans = HMEAN(x,y);
        printf("%g = harmonic mean of %g %g.\n", ans, x, y);
        ans = HMEAN(x - y, x +y);
        printf("%g = harmonic mean of %g %g.\n", ans, x - y, x + y);
    }
    puts("Bye");
    
    return 0;
}