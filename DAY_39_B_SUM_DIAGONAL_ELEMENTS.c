Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int matrix[50][50];
    int sum = 0;

    printf("Enter the number of rows and columns: \n");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (rows == cols)
    {
        for (i = 0; i < rows; i++)
        {
            sum += matrix[i][i];
        }
        printf("%d\n", sum);
    }
    else
    {
        printf("The matrix is not square.\n");
    }

    return 0;
}
