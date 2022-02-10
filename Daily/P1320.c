#include <stdio.h>
#include <string.h>
int main()
{
    int n = 1;
    int c = 0;
    char a[200][200] = {0};
    int b[40000] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
        if (i == 0)
        {
            n = strlen(a[i]);
        }
    }
    if(a[0][0]=='1'){
        c++;
    }
    for (int i = 0; i < n; i++)
    {
        b[c] += 1;
        for (int j = 0; j < n - 1; j++)
        {
            if (a[i][j] == a[i][j + 1])
            {
                b[c] += 1;
            }
            else
            {
                c++;
                b[c] += 1;
            }
        }
        if (a[i][n - 1] != a[i + 1][0])
        {
            c++;
        }
    }
    printf("%d ", n);
    for (int i = 0; i < c; i++)
        printf("%d ", b[i]);
}
