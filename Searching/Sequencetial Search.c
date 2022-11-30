#include <stdio.h>
int arr[100];

//Seach an element
int BinarySearch()
{
    int size, element, count = 0;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("Enter array elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search in array\n");
    scanf("%d", &element);
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            printf("Element found at %d Index\n", i + 1);
            break;
        }
        else
        {
            count++;
        }
    }
    if (count == size)
    {
        printf("Not Found\n");
    }
}


//search an repeated element
int BinarySearch_same_elements()
{
    int size, element, count = 0, same = 0, ele;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("Enter array elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search in array\n");
    scanf("%d", &element);
    for (int i = 0; i < size; i++)
    {
        if (element == arr[i])
        {
            ele = arr[i];
            same++;
        }
        else
        {
            count++;
        }
    }
    if (count == size)
    {
        printf("Not Found\n");
    }
    printf("The number repeate %d times which is %d\n", same, ele);
}
int main()
{
    int choice;
    do
    {
        printf("1.Binary Search\n2.Binary Search for same elements\n3.Exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            BinarySearch();
            break;
        case 2:
            BinarySearch_same_elements();
            break;
        case 3:
            break;
        default:
            printf("WRONG CHOICE\n");
            break;
        }
    } while (choice != 3);
    return 0;
}