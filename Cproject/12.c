#include <stdio.h>
#include <string.h>
//5
void p12_5(void)
{
    int array[100];
    srand((unsigned int) time(0));
    for (size_t i = 0; i < 100; i++)
    {
        array[i] = (rand() % 10 + 1);
    }
 
    printf("\n");
    for (size_t i = 0; i < 100; i++)
    {
        printf("%d ", array[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
 
    for (size_t i = 0; i < 100; i++)
    {
        for (size_t j = i; j < 100; j++)
        {
            if (array[i] < array[j])
            {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
 
    printf("\n");
    for (size_t i = 0; i < 100; i++)
    {
        printf("%d ", array[i]);
        if ((i+1)%10 == 0)
        {
            printf("\n");
        }
    }
 
    return;
} 
//8
int *make_array(int elem, int val)
{
    int *pa = (int *)malloc(elem);
    for (int i = 0; i < elem; i++)
    {
        pa[i] = val;
    }
 
    return pa;
}
void show_array(const int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((i+1)%8 == 0)
        {
            printf("\n");
        }
        printf("%d ", ar[i]);
    }
 
    printf("\n");
 
    return;
}

int main(int argc, char **argv)
{
    p12_9();
 
    while (getchar());
 
    return 0;
}
 