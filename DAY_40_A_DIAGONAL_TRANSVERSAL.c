Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main()
{
    int rows, cols, i, j, r, c, sum;
    int matrix[50][50];

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

    printf("Diagonal traversal: \n");
    
    for (sum = 0; sum <= (rows - 1) + (cols - 1); sum++)
    {
        if (sum % 2 == 0)
        {
            r = (sum < rows) ? sum : (rows - 1);
            c = sum - r;
            
            while (r >= 0 && c < cols)
            {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        }
        else
        {
            c = (sum < cols) ? sum : (cols - 1);
            r = sum - c;
            
            while (r < rows && c >= 0)
            {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");

    return 0;
}
