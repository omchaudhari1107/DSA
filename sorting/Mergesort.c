#include <stdio.h>
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
void MergeSort(int arr[],int mid,int low,int high)
{
}
int main()
{
    int a[] = {9, 14, 4, 8, 7, 5, 6};
    int num = 7;
    printarray(a, num);
    MergeSort();
    printarray(a, num);
    return 0;
}