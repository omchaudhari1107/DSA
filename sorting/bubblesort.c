#include <stdio.h>
int main()
{
    int a[100], n, indexmin, temp;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    // enter an array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Bubble sorting logic
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("sorted array are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}