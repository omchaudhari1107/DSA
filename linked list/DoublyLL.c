#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *previous;
};
void printll(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element are %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insatBegin(struct node *head, int indata)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->previous = NULL;
    ptr->data = indata;
    return ptr;
}
struct node *insatEnd(struct node *foot, int indata)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    foot->next = ptr;

    ptr->data = indata;
    ptr->next = NULL;
    ptr->previous = foot;
    return ptr;
}
struct node *insatMid(struct node *head, struct node *foot, int indata)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    head->next = ptr;
    foot->previous = ptr;

    ptr->next = foot;
    ptr->previous = head;
    ptr->data = indata;
    return ptr;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *n2 = (struct node *)malloc(sizeof(struct node));

    head->next = n2;
    head->previous = NULL;
    head->data = 1;

    n2->next = NULL;
    n2->previous = head;
    n2->data = 2;

    printf("Insert at Begin\n");
    head = insatBegin(head, 0);
    printll(head);
    printf("Insert at End\n");
    n2=insatEnd(n2, 3);
    printll(head);
    printf("Insert at Middle\n");
    insatMid(head, n2, 10);
    printll(head);
    return 0;
}
