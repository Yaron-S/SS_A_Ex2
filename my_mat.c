#include <stdio.h>
#include "my_mat.h"
int mat[10][10];
int func2(int mat[10][10], int i, int j){
    if(func3(mat, i, j) != 0){
        return 1;
    }
    return 0;
}
int func3(int mat[10][10], int i, int j){
    for (int k = 0; k < 10; k++){
        for (int l = 0; l < 10; l++){
            for (int m = 0; m < 10; m++){
                if (mat[l][k] + mat[k][m] < mat[l][m])
                    mat[l][m] = mat[l][k] + mat[k][m];
            }
        }
    }
    return mat[i][j];
}