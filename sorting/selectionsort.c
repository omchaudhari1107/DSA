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

    // selection sorting logic
    for (int i = 0; i < n; i++)
    {
        indexmin = i;
        for (int j = i + 1; j < n; j++) // it find the minimum element in array
        {
            if (a[indexmin] > a[j])
            {
                indexmin = j;
            }
        }
        // swap a[i] and a[indexmin]
        temp = a[indexmin];
        a[indexmin] = a[i];
        a[i] = temp;
    }
    printf("sorted array are\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}