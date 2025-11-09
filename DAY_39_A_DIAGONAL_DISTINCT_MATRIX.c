Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int matrix[50][50];
    int is_distinct = 1;

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
        is_distinct = 0;
    }
    else
    {
        for (i = 0; i < rows; i++)
        {
            for (j = i + 1; j < rows; j++)
            {
                if (matrix[i][i] == matrix[j][j])
                {
                    is_distinct = 0;
                    break;
                }
            }
            if (is_distinct == 0)
            {
                break;
            }
        }
    }

    if (is_distinct == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
