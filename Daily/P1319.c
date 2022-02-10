#include <stdio.h>
int main()
{
    int n, c = 0;
    int a[50000];
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; sum < n * n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for (int i = 0; sum; i++)
    {
        sum -= a[i];
        while (a[i]--)
        {
            c++;
            if (i % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }

            if (c == n)
            {
                printf("\n");
                c = 0;
            }
        }
    }
}
