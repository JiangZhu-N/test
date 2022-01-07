#include <stdio.h>
void jolly()
{
    printf("For he is a jolly good fellow!\n");
    printf("For he is a jolly good fellow!\n");
    printf("For he is a jolly good fellow!\n");
}
void deny()
{
    printf("Which nobody can deny!\n");
}
void br()
{
    printf("Braziil, Russia, ");
}
void ic()
{
    printf("India, China\n");
}
void smile()
{
    printf("Smile!");
}
void one_three()
{
    printf("one\n");
}
void two()
{
    printf("two\n");
}
int main()
{
    //2.1
    printf("Gustav Mahler\n");
    printf("Gustav\nMahler\n");
    printf("Gustav ");
    printf("Mahler\n");
    //2.2
    printf("Gustav Mahler\nADDRESS\n");
    //2.3
    printf("%d %d", 18, 18 * 365);
    //2.4
    jolly();
    deny();
    //2.5
    br();
    ic();
    //2.6
    int toes = 10;
    printf("%d %d %d\n", toes, toes * 2, toes * toes);
    //2.7
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    //2.8
    printf("starting now:\n");
    one_three();
    two();
    printf("three\ndone!");
}