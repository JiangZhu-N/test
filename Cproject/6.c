#include<stdio.h>
#include<string.h>
double fg(double a,double b){
    return (a-b)/(a*b);
}
int main(){
    //6.1
    char a[26]={'a'};
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        printf("%c \t",a[i]);
    }
    printf("\n");
    //6.2
    for(int i=0;i<5;i++){
        for(int j=4-i;j<5;j++){
            printf("$");
        }
        printf("\n");
    }
    //6.3
    char b='F';
    for(int i=0;i<=5;i++){
        b='F';
        for(int j=4-i;j<5;j++){
            printf("%c",b);
            b--;
        }
        printf("\n");
    }
    //6.4
    b='A';
    for(int i=0;i<=5;i++){
        for(int j=4-i;j<5;j++){
            printf("%c",b);
            b++;
        }
        printf("\n");
    }
    //6.5
    printf("输入大写字母：");
    char c='A';
    scanf("%c",&b);
    for(int i=0;i<=b-'A';i++){
        c='A';
        for(int j=0;j<=b-'A'-i;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%c",c++);
        }
        c-=2;
        for(int j=0;j<=i-1;j++){
            printf("%c",c--);
        }
        printf("\n");
    }
    //6.6
    printf("输入下限和上限：");
    int max,min;
    scanf("%d %d",&min,&max);
    for(int i=min;i<=max;i++){
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    }
    //6.7
    char d[10];
    printf("输入一个单词：");
    scanf("%s",d);
    for(int i=strlen(d);i>=0;i--){
        printf("%c",d[i]);
    }
    printf("\n");
    //6.8
    double e,f;
    printf("输入两个浮点数：");
    scanf("%lf %lf",&e,&f);
    printf("%g\n",(e-f)/(e*f));
    //6.9
    printf("%lf\n",fg(e,f));
    //6.10
    printf("输入下限和上限：");
    int g,h,sum=0;
    scanf("%d %d",&g,&h);
    for(int i=g;i<=h;i++){
        sum+=i*i;
    }
    printf("%d\n",sum);
    //6.11
    printf("输入8个整数：");
    int k[8];
    for(int i=0;i<8;i++){
        scanf("%d",&k[i]);
    }
    for(int i=7;i>=0;i--){
        printf("%d ",k[i]);
    }
    printf("\n");
    //6.12
    int o;
    double sum2=0;
    printf("输入项数：");
    scanf("%d",&o);
    for(double i=1.0;i<=o;i++){
        sum2+=1.0/i;
    }
    printf("sum=%lf\n",sum2);
}