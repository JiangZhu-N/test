#include <stdio.h>

double min(double, double);
int chline(char, int, int);
double tiaohe(double, double);
int alpha(char);
double larger_of(double, double);

int main(void)
{
    //9.1
    double x, y;
    printf("请输入两个double值");
    scanf("%lf %lf", &x, &y);
    printf("min:%g", min(x, y));
    //9.2.3
    char ch;
    int i, j;
    printf("请输入打印的字符,行数,列数");
    ch = getchar();
    scanf("%d %d", &j, &i);
    chline(ch, i, j);
    //9.4.5
    double a, b;
    printf("输入两个double类型的数字 ");
    scanf("%lf", &a, &b);
    printf("%g", tiaohe(a, b)); //更换引用的函数
    //9.7
    printf("输入一个字符：");
    printf("这个字符的位置是：%d", alpha(getchar()));

    return 0;
}
double min(double x, double y)
{
    return x > y ? y : x;
}
int chline(char ch, int i, int j)
{
    for (int m = 1; m <= j; m++)
    {
        for (int n = 1; n <= i; n++)
            printf("%c", ch);
        printf("\n");
    }
    return 0;
}
double tiaohe(double a, double b)
{
    return 1 / (((1 / a) + (1 / b)) / 2);
}
double larger_of(double x, double y)
{
    return (x > y) ? x : y;
}

double larger(double *a, double *b, double *c)
{
    double m;
    m = *a;
    *a = ((*a < *b) ? *a : *b);
    *b = ((m > *b) ? m : *b);
    m = *b;
    *b = ((*b < *c) ? *b : *c);
    *c = ((m > *c) ? m : *c);
    m = *a;
    *a = ((*a < *c) ? *a : *c);
    *c = ((m > *c) ? m : *c);
    printf("%g %g %g", *a, *b, *c);
    return 0;
}

int alpha(char ch)
{
    if (islower(ch))
    {
        return ch - 'a' + 1;
        return ch - 'A' + 1;
    }
    else
        return -1;
}

#include <stdio.h>
double power(double, int);
int main(void)
{
    double di;
    int mi;
    while (scanf("%lf %d", &di, &mi) == 2)
    {
        printf("%g的%d次幂为%g\n", di, mi, power(di, mi));
    }
    return 0;
}
double power(double di, int mi)
{
    double jieguo = 1;
    if (mi > 0)
    {
        for (int n = 1; n <= mi; n++)
            jieguo *= di;
        return jieguo;
    }
    else if (mi < 0)
    {
        for (int n = 1; n <= -mi; n++)
            jieguo = jieguo * di;
        return 1 / jieguo;
    }
    else
    {
        if (di == 0)
            return 1;
    }
}
//9.11
#include <stdio.h>
unsigned long Fibonacci(unsigned);
int main(void)
{
    unsigned n;
    printf("输入n：");
    while (scanf("%u", &n))
    {
        printf("斐波那契数为：%lu\n", Fibonacci(n));
        printf("输入n：");
    }
    return 0;
}
unsigned long Fibonacci(unsigned n)
{
    unsigned long f;
    unsigned long f1 = 1;
    unsigned long f2 = 1;
    if (n > 2)
    {
        for (int i = 3; i <= n; i++)
        {
            f = f1 + f2;
            f1 = f2;
            f2 = f;
        }
        return f;
    }
    else
        return 1;
}