#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
//11.2
void getinput(char *input, int num)
{
    char ch = 0;
    for (size_t i = 0; i < num; i++)
    {
        ch = getchar();
        if (isblank(ch))
        {
            return;
        }
        else
        {
            input[i] = ch;
        }
    }

    return;
}
void f1(void)
{
    char input[256];
    int number = 0;
    scanf_s("%d", &number);
    getchar();

    get_input_rewrite(input, number);
    for (size_t i = 0; i < number; i++)
    {
        printf("%c", input[i]);
    }
    printf("\n");
}

// 11.3
void getinput2(char *input)
{
    char ch = 0;
    int i = 0;
    do
    {
        ch = getchar();
        if (!isblank(ch))
        {
            break;
        }
    } while (1);

    input[i++] = ch;
    do
    {
        ch = getchar();
        if (isblank(ch))
        {
            break;
        }
        input[i++] = ch;
    } while (1);

    input[i] = '\0';

    return;
}
void f2(void)
{
    char input[256];

    get_input2(input);

    printf("%s\n", input);

    return;
}

//11.4
void getinput3(char *input, int num)
{
    char ch = 0;
    int i = 0;
    printf(" %d ", num - 1);
    do
    {
        ch = getchar();
        if (!isblank(ch))
        {
            break;
        }
    } while (1);

    input[i++] = ch;
    do
    {
        ch = getchar();
        if (isblank(ch))
        {
            break;
        }
        input[i++] = ch;
        if (i >= num - 1)
        {
            break;
        }
    } while (1);

    input[i] = '\0';

    return;
}
void f3(void)
{
    char input[10];

    get_input3(input, 10);

    printf(" %s\n", input);

    return;
}
// 11.77
char *x(char *s1, char *s2, int n)
{
    int s1_length = strlen(s1);
    int s2_length = strlen(s2);
    int copy_length = (s2_length >= n ? n : s2_length);

    for (size_t i = 0; i < copy_length; i++)
    {
        s1[s1_length + i] = s2[i];
    }

    if (s2_length < n)
    {
        s1[s1_length + s2_length] = '\0';
    }

    return s1;
}

char *y(char *string1, char *string2)
{
    int string_length = strlen(string1);
    int chr_length = strlen(string2);
    int m = 0;
    int n = 0;

    for (size_t i = 0; i < string_length; i++)
    {
        n = i;
        m = 0;
        while (string1[n] == string2[m])
        {
            n++;
            m++;
            if (m >= chr_length)
            {
                return &string1[i];
            }
        }
    }
    return NULL;
}
//11.11
void printstring(char *string[10], int string_amount)
{
    for (size_t i = 0; i < string_amount; i++)
    {
        printf("%d: ", i);
        puts(string[i]);
    }

    return;
}

void printstring2(char string[][256], int string_amount)
{
    static char *string_length[10];
    static _Bool sort = 0;

    if (sort != 1)
    {
        for (size_t i = 0; i < string_amount; i++)
        {
            string_length[i] = string[i];
        }

        for (size_t i = 0; i < string_amount; i++)
        {
            for (size_t j = i + 1; j < string_amount; j++)
            {
                if (strlen(string_length[i]) < strlen(string_length[j]))
                {
                    char *tmp = string_length[i];
                    string_length[i] = string_length[j];
                    string_length[j] = tmp;
                }
            }
        }

        sort = 1;
    }
    print_string(string_length, string_amount);
}
int check(char *string)
{
    int result = 0;
    int string_lenght = strlen(string);

    for (size_t i = 0; i < string_lenght; i++)
    {
        if (isspace(string[i]))
        {
            return i;
        }
    }
    return string_lenght;
}
