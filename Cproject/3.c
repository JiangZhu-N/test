#include <stdio.h>
int main()
{
    //3.1
    int a = 10000000000000000;
    float b = 12.34567890;
    printf("%d %f %f %f\n", a, b, b * 100000000000, b / 1000000);
    //3.2
    int c;
    printf("输入ASCLL码：");
    scanf("%d", &c);
    printf("%c\n", c);
    //3.3
    printf("\aStartled by the sudden sound, Sally shouted,\n"
           "\"By the Great Pumpkin, what was that!\"\n");
    //3.4
    double d;
    printf("输入小数：");
    scanf("%lf", &d);
    printf("%lf %le %la\n", d, d, d);
    //3.5
    int e;
    printf("输入年龄：");
    scanf("%d", &e);
    printf("%.f\n", e * 3.156e+7);
    //3.6
    int f;
    printf("输入夸脱数：");
    scanf("%d", &f);
    printf("%.llf\n", f * 950.0 / 3.0e-23L);
    //3.7
    double g;
    printf("输入身高：");
    scanf("%lf", &g);
    printf("%g(cm)\n", g * 2.45);
}