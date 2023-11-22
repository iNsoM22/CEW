#include<stdio.h>

void addMat(int *A, int *B, int *result, int row, int col){
    int *ptrA = A;
    int *ptrB = B;
    int *ptrC = result;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            *(ptrC + i*col + j) = *(ptrA + i*col + j) + *(ptrB + i*col + j);
        }
    }
}
void printMat(int *mat, int row, int col) {
    int *temp = mat;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++) printf("%d ", *(temp + i*col + j));
        printf("\n");
    }
}

int main() {
    int A[2][3] = { {0, 1, 3}, {5, 4, 3} }, 
        B[2][3] = { {53, 42, 90}, {2, 3, 14} },
        C[2][3];
    int row = 2, col = 3;
    addMat(&A, &B, &C, row, col);
    printMat(&C, row, col);
    return 0;
}
