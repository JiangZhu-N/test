#include <stdio.h>
#define s 60
void f(double a){
    printf("%g\n",a*a*a);
}
void g(double a){
    printf("摄氏度：%lf 华氏度：%lf 开氏度：%lf\n",a,5.0/9.0*(a-32.0),a+273.16);
}
int main()
{
    //5.1
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        printf("小时：%d 分钟：%d\n", t / s, t % s);
        scanf("%d", &t);
    }
    //5.2
    printf("输入一个整数：");
    int a;
    scanf("%d", &a);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\t", a + i);
    }
    printf("\n");
    //5.3
    int b;
    printf("输入天数：");
    scanf("%d", &b);
    printf("%d是%d周%d天\n", b, b / 7, b % 7);
    //5.4
    printf("输入身高：");
    double c;
    scanf("%lf",&c);
    while(c>0){
        printf("%gcm %gfoot %ginches\n",c,c/36.4,c/(182.0/11.7));
        scanf("%lf",&c);
    }
    //5.5
    int count,sum,d;
    count=sum=0;
    printf("输入天数：");
    scanf("%d",&d);
    while(++count<d){
        sum+=count;
    }
    printf("sum=%d\n",sum);
    //5.6
    count=sum=0;
    printf("输入天数：");
    scanf("%d",&d);
    while(++count<d){
        sum+=count*count;
    }
    printf("%d\n",sum);
    //5.7
    double e;
    printf("输入double型：");
    scanf("%lf",&e);
    f(e);
    //5.8
    double h;
    printf("输入一个double：");
    while(scanf("%lf",&h)&&h!='q'){
        g(h);
    }
}