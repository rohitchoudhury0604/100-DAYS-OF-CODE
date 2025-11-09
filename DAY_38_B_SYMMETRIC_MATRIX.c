Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int matrix[50][50];
    int is_symmetric = 1;

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

    if (rows != cols)
    {
        is_symmetric = 0;
    }
    else
    {
        for (i = 0; i < rows; i++)
        {
            for (j = 0; j < cols; j++)
            {
                if (matrix[i][j] != matrix[j][i])
                {
                    is_symmetric = 0;
                    break;
                }
            }
            if (is_symmetric == 0)
            {
                break;
            }
        }
    }

    if (is_symmetric == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
