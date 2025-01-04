#include <stdio.h>
int isUpperTriangular(int mat[10][10], int rc)
{
    for (int i = 1; i < rc; i++)
        for (int j = 0; j < i; j++)
            if (mat[i][j] != 0)
                return 0;
    return 1;
}
int isLowerTriangular(int mat[10][10], int rc)
{
    for (int i = 0; i < rc; i++)
        for (int j = i + 1; j <rc ; j++)
            if (mat[i][j] != 0)
                return 0;
    return 1;
}
int main()
{
    int rc;
    int mat[10][10];
    printf("Enter the number of rows and columns of the matrix:\n ");
    scanf("%d", &rc);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rc; i++)
        for (int j = 0; j < rc ; j++)
            scanf("%d", &mat[i][j]);
    if (isUpperTriangular(mat, rc))
        printf("The matrix is upper triangular.\n");
    else if (isLowerTriangular(mat, rc))
        printf("The matrix is lower triangular.\n");
    else
        printf("The matrix is neither upper triangular nor lower triangular");
    return 0;
}