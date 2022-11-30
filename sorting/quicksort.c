#include <stdio.h>
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
int partition(int arr[], int low, int high)
{
    int temp, pivot = arr[low];
    int i = low + 1;
    int j = high;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
    // swap arr[low] and arr[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void QuickSort(int arr[], int low, int high)
{
    int partitionIndex; // index of pivot after partition
    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        QuickSort(arr, low, partitionIndex - 1);  // sort left subarray
        QuickSort(arr, partitionIndex + 1, high); // sort right subarray
    }
}
int main()
 {
    int a[] = {3, 5, 2, 13, 12};
    int n = 5;
    printf("Befor Sorting:\n");
    printArray(a, n);
    QuickSort(a, 0, n - 1);
    printf("After Sorting:\n");
    printArray(a, n);
    return 0;
}