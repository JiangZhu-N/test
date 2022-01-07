#include <stdio.h>
int main()
{
    int n, m, a[100][100] = {0};
    int c = 1, x = 0;
    scanf("%d", &n);
    m = n;
    while (n)
    {
        for (int i = x; i < n; i++)
        {
            a[x][i] = c++;
        }
        for (int i = x; i < n - 1; i++)
        {
            a[i + 1][n - 1] = c++;
        }
        for (int i = n - 2; i >= x; i--)
        {
            a[n - 1][i] = c++;
        }
        for (int i = n - 2; i >= 1; i--)
        {
            if (a[i][x] == 0)
            {
                a[i][x] = c++;
            }
        }
        x++;
        n--;
        ;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
}