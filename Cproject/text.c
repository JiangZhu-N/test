#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Node
{
    int num;
    char name[15];
    struct Node *next;
};
struct Node *creatList(void)
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->next = NULL;
    return head;
}
/*===========================*/
struct Node *HaddNode(struct Node *head)
{
    int num;
    char name[15];
    printf("请输入学生序号和姓名：");
    scanf("%d %s", &num, name);

    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->num = num;
    strcpy(p->name, name);
    p->next = head->next;
    head = p;
    return head;
}
/*===========================*/
struct Node *TaddNode(struct Node *head)
{
    int num;
    char name[15];
    printf("请输入学生序号和姓名：");
    scanf("%d %s", &num, name);

    struct Node *q = head;
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->num = num;
    strcpy(p->name, name);
    p->next = NULL;
    while (q->next)
    {
        q = q->next;
    }
    q->next = p;
    return head;
}
struct Node *deleteNode(struct Node *head)
{
    int num;
    printf("请输入需要删除的学生序号：");
    scanf("%d", &num);

    struct Node *p = head;
    struct Node *q = head->next;
    while (q && p->num != num)
    {
        p = q;
        q = q->next;
    }
    if (p->num == num)
    {
        p->next = q->next;
        free(q);
    }
    else
    {
        printf("无该数据\n");
    }
    return head;
}
struct Node *sortList(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    if (head->next)
    {
        return head;
    }
    while (q)
    {
        if (p->num > q->num)
        {
            p->next = q->next;
            q->next = p;
        }
    }
    return head;
}
struct Node *printfList(struct Node *head)
{
    struct Node *p = head;
    if (p->next == NULL)
    {
        printf("无数据\n");
        return head;
    }
    while (p->next)
    {
        p = p->next;
        printf("%d %s\n", p->num, p->name);
    }
    return head;
}
int main()
{
    int n = 1;
    struct Node *head = creatList();
    while (n)
    {
        printf("1.头插\t2.尾插\t3.删除\t4.排序\t5.打印\t0.退出\n");
        scanf("%d", &n);
        if (n == 1)
        {
            HaddNode(head);
        }
        else if (n == 2)
        {
            TaddNode(head);
        }
        else if (n == 3)
        {
            deleteNode(head);
        }
        else if (n == 4)
        {
            sortList(head);
        }
        else if (n == 5)
        {
            printfList(head);
        }
    }
}