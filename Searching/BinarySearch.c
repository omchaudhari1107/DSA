// Binary Search in C

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high)
{
    // Repeat until the pointers low and high meet each other
    while (low <= high)
    {
        int mid = low + high / 2;

        if (array[mid] == x)
            return mid;

        if (x>array[mid])
            low = mid + 1;
        else if(x<array[mid])
            high = mid + 1;
    }

    return -1;
}

int main(void)
{
    int array[] = {60, 4, 9, 10, 1, 2, 3};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 1;
    int result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element is found at index %d", result + 1);
    return 0;
}