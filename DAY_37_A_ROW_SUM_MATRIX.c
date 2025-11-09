Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int matrix[50][50];
    int row_sums[50];
    int sum;

    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < rows; i++)
    {
        sum = 0;
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        row_sums[i] = sum;
    }

    printf("The sum of each row is: \n");
    for (i = 0; i < rows; i++)
    {
        printf("%d ", row_sums[i]);
    }
    printf("\n");

    return 0;
}
