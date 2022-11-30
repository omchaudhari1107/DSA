#include <stdio.h>
#include <stdlib.h>
int count = 0;
struct Node
{
    int data;
    struct Node *next;
};
void printll(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element are %d\n", ptr->data);
        ptr = ptr->next;
    }
}
// insert at first
struct Node *insertatfirst(struct Node *head, int indata)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = indata;
    ptr->next = head;
    return ptr;
}
// insert at middle
struct Node *insertatmiddle(struct Node *pre, struct Node *nex, int indata)
{

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    pre->next = ptr;
    ptr->data = indata;
    ptr->next = nex;
    return ptr;
}
// insert at last
struct Node *insertatlast(struct Node *last, int indata)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    last->next = ptr;
    ptr->data = indata;
    ptr->next = NULL;
}
struct Node *deleteatmiddle(struct Node *pre, struct Node *nex)
{
    pre->next = nex;
    return pre;
}
struct Node *reverse(struct Node *head)
{
    struct Node *prevptr = NULL;
    struct Node *currptr = head;
    struct Node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
struct Node *searching(struct Node *head, int search_data)
{
    struct Node *currptr = head;
    struct Node *nextptr;
    while (currptr != NULL)
    {
        nextptr = currptr->next;
        if (currptr->data == search_data)
        {
            printf("Value %d found at Node Address %d", currptr->data, currptr);
        }
        currptr = nextptr;
    }
}

int countNode(struct Node *head)
{
    struct Node *currpt = head;
    struct Node *nexptr;

    int count = 0;
    while (currpt != NULL)
    {
        count++;
        nexptr = currpt->next;
        currpt = nexptr;
    }
    return count;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 17;
    second->next = third;

    third->data = 71;
    third->next = NULL;

    // printf("befor add\n");
    // printll(head);

    // insert
    //  printf("Afetr add at first\n");
    //  head = insertatfirst(head, 12);
    //  printll(head);

    // printf("After add at middle\n");
    // second = insertatmiddle(second, third, 13);
    // printll(head);

    // printf("After add at last\n");
    // third = insertatlast(third,90);
    // printll(head);

    // delete
    //  printll(head);
    //  printf("Deleating at middle\n");
    //  head = deleteatmiddle(head,third);
    //  printll(head);

    // reverse
    // printll(head);
    // printf("Reverse Elements\n");
    // head = reverse(head);
    // printll(head);

    // searching
    //  searching(head,17);

    // sort
    // n = countNode(head);
    // sorting(head, n);
    // printll(head);

    // count
    printf("No. of defined nodes are %d", countNode(head));
    return 0;
}