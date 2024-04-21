#include <stdio.h>
#include <stdlib.h>

int** allocate(int row, int col);
void deallocate(int** matrix, int row);
int** transpose(int** M, int* ptr_row, int* ptr_col);
void display(int** matrix, int row, int col);
int** add(int** A, int** B, int row, int col);
int** multiply(int** A, int** B, int row_A, int col_A, int row_B, int col_B);

int main() {
    int** A, ** B, ** C, ** T;
    int r1, c1, r2, c2;
    int choice;

    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &r2, &c2);

    A = allocate(r1, c1);
    B = allocate(r2, c2);

    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    do {
        printf("\nMenu:\n");
        printf("1. Add\n");
        printf("2. Multiply\n");
        printf("3. Transpose A\n");
        printf("4. Transpose B\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (r1 == r2 && c1 == c2) {
                    C = add(A, B, r1, c1);
                    printf("Result of addition:\n");
                    display(C, r1, c1);
                    deallocate(C, r1);
                } else {
                    printf("Matrices A and B must have the same dimensions to add.\n");
                }
                break;
            case 2:
                if (c1 == r2) {
                    C = multiply(A, B, r1, c1, r2, c2);
                    printf("Result of multiplication:\n");
                    display(C, r1, c2);
                    deallocate(C, r1);
                } else {
                    printf("Number of columns of matrix A must be equal to the number of rows of matrix B to multiply.\n");
                }
                break;
            case 3:
                T = transpose(A, &r1, &c1);
                printf("Transpose of matrix A:\n");
                display(T, r1, c1);
                deallocate(A, c1);
                A = T;
                break;
            case 4:
                T = transpose(B, &r2, &c2);
                printf("Transpose of matrix B:\n");
                display(T, r2, c2);
                deallocate(B, c2);
                B = T;
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);

    deallocate(A, r1);
    deallocate(B, r2);

    return 0;
}

int** allocate(int row, int col) {
    int** matrix = (int**)malloc(row * sizeof(int*));
    for (int i = 0; i < row; i++) {
        matrix[i] = (int*)malloc(col * sizeof(int));
    }
    return matrix;
}

void deallocate(int** matrix, int row) {
    for (int i = 0; i < row; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

int** transpose(int** M, int* ptr_row, int* ptr_col) {
    int row = *ptr_row;
    int col = *ptr_col;
    int** T = allocate(col, row);
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            T[i][j] = M[j][i];
        }
    }
    *ptr_row = col;
    *ptr_col = row;
    deallocate(M, row);
    return T;
}

void display(int** matrix, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int** add(int** A, int** B, int row, int col) {
    int** C = allocate(row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

int** multiply(int** A, int** B, int row_A, int col_A, int row_B, int col_B) {
    int** C = allocate(row_A, col_B);
    for (int i = 0; i < row_A; i++) {
        for (int j = 0; j < col_B; j++) {
            C[i][j] = 0;
            for (int k = 0; k < col_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}
