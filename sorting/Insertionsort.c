#include <stdio.h>
int main()
{
    int arr[100], size;
    printf("Enter size of array for sorting\n");
    scanf("%d", &size);
    printf("Enter array Elements\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // insertion sorting Logic
    int key, j;
    for (int i = 1; i <= size - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1]=key;
    }

    printf("Sorting array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}