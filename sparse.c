#include <stdio.h>
int main()
{
    int row, column;
    printf("Enter row\n");
    scanf("%d", &row);
    printf("Enter Column\n");
    scanf("%d", &column);
    int a[row][column], i, j, num = 0;
    printf("Enter elements in mtrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &a[i][i]);
        }
    }
    // logic for sparce matrix
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (a[i][j] == 0)
                num++;
        }
    }
    if (num > (row * column) / 2)
        printf("Sparse matrix");
    else
        printf("not a Sparse matrix");

    return 0;
}