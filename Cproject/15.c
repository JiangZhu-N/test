#include <stdio.h>
//15.1
int main()
{
    char str[100];
    int i,n=0;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='1' || str[i]=='0')
        {
            n<<=1;
            n+=str[i]-'0';
        }
        else
        {
            printf("不是二进制数\n");
            return 1;
        }
    }
    printf("%d\n",n);
}
//15.2
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d %d %d %d %d\n",m&n,m|n,m^n,~m,~n);
}
//153
int count(int n)
{
    int x = 1, sum = 0;
    for (int i = 0; i < sizeof(int); ++i)
    {
        if(n & x)
        {
            sum++;
        }
        x <<= 1;
    }
    return sum;
}
 
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", count(n));
    return 0;
}
//15.4
int judge(int a, int b)
{
    int x = 1 << (b - 1);
    if(a & x)
    {
        return 1;
    }
    return 0;
}
 
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", judge(a, b));
    return 0;
}
//15.5
int ar[sizeof(int)];
int retate_l(int a, int b)
{
    int ax[b];
    for (int i = 0; i < b; ++i) {
        ax[i] = a & ar[i];
    }
    a <<= b;
    for (int j = 0; j < b; ++j) {
        a += ax[j] << b;
    }
    return a;
}
 
int main()
{
    for (int i = 0; i <sizeof(int); ++i) {
        ar[i] =  1 << (sizeof(int) - i - 1);
    }
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", retate_l(a, b));
    return 0;
}