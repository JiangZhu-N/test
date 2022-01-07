#include<stdio.h>
int main(){
    //8.1
    int a=0;
    char ch;
    FILE *p=fopen("text.txt","r");
    if(p==NULL){
        printf("打开失败");
        return 0;
    }
    while((ch=fgetc(p))!=EOF){
        a++;
    }
    fclose(p);
    printf("%d\n",a);
    //8.2
    FILE *q=fopen("text.txt","r");
    if(q==NULL){
        printf("打开失败");
        return 0;
    }
    while((ch=fgetc(q))!=EOF){
        printf("%d ",ch);
    }
    fclose(q);
    //8.3
    int big=0,little=0;
    FILE *r=fopen("text.txt","r");
    if(r==NULL){
        printf("打开失败");
        return 0;
    }
    while((ch=fgetc(r))!=EOF){
        if(ch>='A'&&ch<='Z'){
            big++;
        }else if(ch>='a'&&ch<='z'){
            little++;
        }
    }
    printf("\nbig:%d little:%d\n",big,little);
    fclose(r);
}