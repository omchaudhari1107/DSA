#include <stdio.h>
int front, rear, size, arr[100];
void enqueue()
{   int ele;
    if ((rear + 1) % size == front)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        printf("Enter an element: ");
        scanf("%d", &ele);
        //circular incriment
        rear = (rear + 1) % size;
        arr[rear] = ele;
    }
}
void dequeue()
{
    if (front == -1)
    {
        printf("Empty Queue\n");
    }
    //to resert when front is equla to rear
    else if(front==rear){
        front=-1;
        rear=-1;
    }
    else
    {
printf("Element Dequeued: %d", arr[front]);
        front = (front + 1) % size;
    }
}
void show()
{   int i;
    if (front == -1)
    {
        printf("Empty Queue\n");
    } 
    else{
        printf("Elements are:\n");
        //loop work till i is not qual to rear
        //means front to rear-1
        for (i = front; i != rear; i=(i+1)%size)
        {
           printf("%d\t",arr[i]);
        }
        printf("%d",arr[i]);
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
    } while (choice != 4);return 0;
}