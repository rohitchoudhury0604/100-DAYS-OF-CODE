Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main()
{
    int rows1, cols1, rows2, cols2, i, j, k;
    int matrix1[50][50], matrix2[50][50], result_matrix[50][50];
    int sum;

    printf("Enter rows and columns for first matrix: \n");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter elements of first matrix: \n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter rows and columns for second matrix: \n");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter elements of second matrix: \n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (cols1 != rows2)
    {
        printf("Matrices cannot be multiplied (cols1 != rows2).\n");
    }
    else
    {
        printf("The product of the matrices is: \n");
        for (i = 0; i < rows1; i++)
        {
            for (j = 0; j < cols2; j++)
            {
                sum = 0;
                for (k = 0; k < cols1; k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                result_matrix[i][j] = sum;
                printf("%d ", result_matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
