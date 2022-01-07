#include <stdio.h>
int main()
{
    //7.1
    char a[10];
    int n = 0, k = 0, l = 0;
    for (int i = 0;; i++)
    {
        scanf("%c", &a[i]);
        if (a[i] == ' ')
        {
            k++;
        }
        else if (a[i] == '\n')
        {
            n++;
        }
        else if (a[i] != '#')
        {
            l++;
        }
        else
        {
            break;
        }
    }
    printf("空格：%d 换行：%d 其他：%d\n", k, n, l);
    //7.2
    char b[50];
    for (int i = 0;; i++)
    {
        scanf("%s", &b[i]);
        if (b[i] == '#')
        {
            break;
        }
    }
    for (int i = 0;; i++)
    {
        if (b[i] == '\n')
        {
            continue;
        }
        if (b[i] == '#')
        {
            break;
        }
        printf("%c-%d ", b[i], b[i]);
        if ((i + 1) % 8 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    //7.3
    int c[100];
    int sumdouble = 0;
    int sumsingle = 0;
    double avedouble, avesingle;
    for (int i = 0;; i++)
    {
        scanf("%d", &c[i]);
        if (c[i] == 0)
        {
            break;
        }
        if (c[i] != 0 && c[i] % 2 == 0)
        {
            sumdouble++;
            avedouble += c[i];
        }
        else
        {
            sumsingle++;
            avesingle += c[i];
        }
    }
    printf("奇数：%d,平均：%g\n偶数：%d,平均：%g\n", sumsingle, avesingle / sumsingle, sumdouble, avedouble / sumsingle);
    //7.7
    printf("输入一周工作的小时数：");
    double t;
    double money = 0;
    scanf("%lf", &t);
    if (t > 40)
    {
        t = 40 + (t - 40) * 1.5;
    }
    money = t * 10;
    if (money <= 300)
    {
        money *= 0.85;
    }
    else if (money <= 150)
    {
        money = 300 * 0.85 + (money - 300) * 0.80;
    }
    else
    {
        money = 300 * 0.85 + 150 * 0.80 + (money - 450) * 0.75;
    }
    printf("%g$\n", money);
    //7.8
    double leavel;
    printf("*********************************************\n");
    printf("输入一个选项：\n");
    printf("1) $8.75/hr                    2)$9.33/hr\n");
    printf("3) $10.00/hr                   4)$11.20/hr\n");
    printf("5) quite\n");
    printf("*********************************************\n");
    do
    {
        scanf("%d", &n);
        if (n <= 0 || n > 5)
        {
            printf("请输入正确选项\n");
        }
    } while (n <= 0 || n > 5);
    if (n == 1)
    {
        leavel = 8.75;
    }
    else if (n == 2)
    {
        leavel = 9.33;
    }
    else if (n == 3)
    {
        leavel = 10.0;
    }
    else if (n == 4)
    {
        leavel = 11.2;
    }
    if (n != 5)
    {
        printf("输入一周工作的小时数：");
        scanf("%lf", &t);
        if (t > 40)
        {
            t = 40 + (t - 40) * 1.5;
        }
        money = t * leavel;
        if (money <= 300)
        {
            money *= 0.85;
        }
        else if (money <= 150)
        {
            money = 300 * 0.85 + (money - 300) * 0.80;
        }
        else
        {
            money = 300 * 0.85 + 150 * 0.80 + (money - 450) * 0.75;
        }
        printf("%g$\n", money);
    }
    //7.8
    printf("输入整数：");
    scanf("%d", &n);
    int flage;
    for (int i = 2; i <= n; i++)
    {
        flage = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flage = 0;
            }
        }
        if (flage == 1)
        {
            printf("%d\t", i);
        }
    }
    printf("\n");
}