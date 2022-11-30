#include <stdio.h>
/*queue contain front-->for deleteing 
rear-->for incerting*/
int front, rear, size, arr[100];
void enqueue()
{
    int incert_element;
    if (rear >= size - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("enter an element\n");
        scanf("%d", &incert_element);
        rear++;
        arr[rear] = incert_element;
        printf("Element Incerted: %d",arr[rear]);
    }
}
void dequeue()
{
    if (front == -1 || front >= rear)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Dequed element: %d", arr[front]);
        front++;
    }
}
void show()
{
    if (front == -1 || front > rear)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Queue Elements are\n");
        for (int i = front; i < rear; i++)
        {
            printf("%d",arr[i]);
        }
    }
}
int main()
{
    int choice;
    front = rear = -1;
    printf("Enter the size of queue: ");
    scanf("%d", &size);
    do
    {
        printf("\nEnter a choice\n");
        printf("1.Enqueue\n2.Dequeue\n3.Show\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            show();
            break;

        case 4:
            break;

        default:
            printf("\nWrong choice\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
