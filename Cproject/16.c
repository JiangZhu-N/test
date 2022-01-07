//16.1
#ifndef maxmin
#define maxmin
#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))
#define MIN(X, Y) ((X) > (Y) ? (Y) : (X))
#endif
//16.2
#include <stdio.h>
#define f(X, Y) (1 / ((1 / (X) + 1 / (Y)) / 2))
int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%lf", f(a, b));
}
//16.5
void f2(int a[], int l, int n)
{
    srand((unsigned long)clock());
    int *b = (int *)calloc(l, sizeof(int));
    int x;
    while (n)
    {
        x = rand() % l;
        if (b[x])
        {
            continue;
        }
        printf("%d ", a[x]);
        b[x] = 1;
        n--;
    }
}
int main()
{
    int a[50], l, n;
    scanf("%d %d", &l, &n);
    for (int i = 0; i < l; ++i)
    {
        scanf("%d", a + i);
    }
    f2(a, l, n);
    return 0;
}
