#include <stdio.h>
#include <string.h>
#include <float.h>
#define changeE(a, b) ((a * 3.785) / (b * 1.609 * 100))
#define changeA(a, b) ((b * 1.609 * 100) / (a * 3.785))
int main()
{
    //4.1
    printf("输入姓名：");
    char a[10], b[10];
    scanf("%s %s", a, b);
    printf("%s,%s\n", a, b);
    //4.2
    printf("输入姓名：");
    char c[10];
    scanf("%s", c);
    printf("\"%s\"\n", c);
    printf("%20s\n", c);
    printf("%-20s\n", c);
    printf("   %s\n", c);
    //4.3
    printf("输入浮点数：");
    double d;
    scanf("%lf", &d);
    printf("%lf or %e\n", d, d);
    printf("%lf or %E\n", d, d);
    //4.4
    printf("输入身高和姓名：");
    char e[10];
    double f;
    scanf("%lf %s", &f, e);
    printf("%s,你的身高是%gm\n", e, f / 100.0);
    //4.5
    printf("输入下载速度和文件大小：");
    double g, h;
    scanf("%lf %lf", &g, &h);
    printf("文件大小：%.2lf，下载速度：%.2lf，剩余时间：%.2lf\n", h, g, h / g);
    //4.6
    char i[10], j[10];
    printf("输入名，姓：\n");
    scanf("%s %s", i, j);
    printf("%*d ", strlen(i), strlen(i));
    printf("%*d\n", strlen(j), strlen(j));
    printf("%-*d ", strlen(i), strlen(i));
    printf("%-*d\n", strlen(j), strlen(j));
    //4.7
    double k = 1.0 / 3.0;
    float l = 1.0 / 3.0;
    printf("%d,%d\n", FLT_DIG, DBL_DIG);
    printf("double:%.6lf %.12lf %.16lf\n", k, k, k);
    printf("float:%.6lf %.12lf %.16lf\n", l, l, l);
    //4.8
    printf("输入里程和消耗的汽油量：");
    double m, n;
    scanf("%lf %lf", &m, &n);
    printf("%.1lf\n", m / n);
    printf("%.1lf %.1lf\n", changeE(n, m), changeA(n, m));
}