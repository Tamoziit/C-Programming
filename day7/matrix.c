#include <stdio.h>
#define MAXROWS 100
#define MAXCOLS 100

void accept(int M[][MAXCOLS], int r, int c)
{
    int i, j;
    printf("Enter the elements\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d", &M[i][j]);
    }
}

void display(int M[][MAXCOLS], int r, int c)
{
    int  i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ", M[i][j]);
        printf("\n");
    }
}

void matrix_add(int A[][MAXCOLS], int B[][MAXCOLS], int C[][MAXCOLS], int r, int c)
{
    int i, j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            C[i][j]=A[i][j]+B[i][j];
    }
}

void matrix_mul(int A[][MAXCOLS], int B[][MAXCOLS], int D[][MAXCOLS], int r1, int c1, int c2)
{
    int i, j, k;
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            D[i][j]=0;
            for(int k=0; k<c1; k++)
                D[i][j]+=A[i][k]*B[k][j];
        }
    }
}

int main()
{
    int A[MAXROWS][MAXCOLS], B[MAXROWS][MAXCOLS], C[MAXROWS][MAXCOLS], D[MAXROWS][MAXCOLS];
    int r1, c1, r2, c2;
    printf("Enter order of matrix 1\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter order of matrix 2\n");
    scanf("%d %d", &r2, &c2);
    printf("Enter elements of matrix 1\n");
    accept(A, r1, c1);
    printf("Enter elements of matrix 2\n");
    accept(B, r2, c2);
    printf("Matrix 1:\n");
    display(A, r1, c1);
    printf("Matrix 2:\n");
    display(B, r2, c2);
    if(r1==r2 && c1==c2)
    {
        printf("Addition:\n");
        matrix_add(A, B, C, r1, c1);
        display(C, r1, c1);
    }
    else
    {
        printf("Addition not possible!\n");
    }
    if(c1==r2)
    {
        printf("Multiplication:\n");
        matrix_mul(A, B, D, r1, c1, c2);
        display(D, r1, c2);
    }
    else
    {
        printf("Multiplication not possible!\n");
    }
    return 0;
}