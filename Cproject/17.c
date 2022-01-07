
//17.1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45

struct film
{
    char title[TSIZE];
    int rating;
    struct film *next;
};

void print_reverse_list(struct film *head);
char *s_gets(char *st, int n);

int main(void)
{
    struct film *head = NULL;
    struct film *prev, *current;
    char input[TSIZE];

    puts("Enter first movie title:");
    while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
    {
        current = (struct film *)malloc(sizeof(struct film));
        if (head == NULL)
        {
            head = current;
        }
        else
        {
            prev->next = current;
        }
        current->next = NULL;
        strcpy(current->title, input);
        puts("Enter your rating <0-10>:");
        scanf("%d", &current->rating);
        while (getchar() != '\n')
            continue;
        puts("Enter next movie title (empty line to stop):");
        prev = current;
    }

    if (head == NULL)
    {
        printf("No data entered. ");
    }
    else
    {
        printf("Here is the movie list:\n");
    }
    current = head;
    while (current != NULL)
    {
        printf("Movie: %s  Rating: %d\n",
               current->title, current->rating);
        current = current->next;
    }
    if (head != NULL)
    {
        printf("\nHere is the list in reverse order:\n");
        print_reverse_list(head);
    }
    current = head;
    while (current != NULL)
    {
        free(current);
        current = current->next;
    }
    printf("Bye!\n");

    return 0;
}

void print_reverse_list(struct film *head)
{
    if (head->next != NULL)
    {
        print_reverse_list(head->next);
    }
    printf("Movie: %s  Rating: %d\n", head->title, head->rating);
    return;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}

//17.6
#include <stdio.h>
#define SIZE 10

int binary_search(const int sorted[], int size, int val);

int main(void)
{
    int num, found;
    int nums[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    while (scanf("%d", &num) == 1)
    {
        found = binary_search(nums, SIZE, num);
        if (1 == found)
        {
            printf("%d 不存在\n", num);
        }
        else
        {
            printf("%d 存在\n", num);
        }
    }

    return 0;
}

int binary_search(const int sorted[], int size, int val)
{
    int mid;
    int min = 0;
    int max = size - 1;
    int found = 0;

    while (min < max)
    {
        mid = (min + max) / 2;
        if (val < sorted[mid])
        {
            max = mid - 1;
        }
        else if (val > sorted[mid])
        {
            min = mid + 1;
        }
        else
        {
            found = 1;
            break;
        }
    }
    if (sorted[min] == val)
    {
        found = 1;
    }
    return found;
}
