#include <stdio.h>
int stack[10], top, ssize, choice, x, i,c,changing;
// for pushing
void push()
{
    if (top >= ssize - 1) // or (top > ssizs-2) but why compiler cant cnosidered -1>-2....when ssize = 0
    {
        printf("////Stack Overflow////\n");
    }
    else
    {
        printf("Enter the element you want to Pushed: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
// for pop
void pop()
{
    if (top <= -1)
    {
        printf("***Stack Empty***\n");
    }
    else
    {
        printf("***Element Poped***\n");
        top--;
    }
}
// for diplay
void display()
{
    if (top >= 0)
    {
        printf("Elements are\n");
        for (i = 0; i <= top; i++)
        {
            printf("%d\t", stack[i]);
        }
    }
    else
    {
        printf("***Empty Stack***\n");
    }
}
//for change
void change(){
    printf("Enter the array block to change the number\n");
    scanf("%d",&c);
    printf("Enter the Element\n");
    scanf("%d",&changing);
    stack[c]=changing;
    printf("Element changed...\n");
}
//peep
void peep()
{
     if (top <= -1)
    {
        printf("***Stack Empty***\n");
    }
    else
    {
        printf("top element of stack is %d ",stack[top]);
    }
}
int main()
{
    top = -1;
    printf("Enter the size of stack: ");
    scanf("%d", &ssize);
    do
    {
        printf("\n1.push\n2.pop\n3.Change\n4.Peep()\n5.Display\n6.Exit\n");
        printf("Enter The choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            change();
            break;
        case 4:
            peep();
            break;
        case 5:
            display();
            break;
        case 6:
        {
            break;
        }
        default:
            printf("Wrong Choice");
            break;
        }

    } while (choice != 6);

    return 0;
}