#include <stdio.h>
#include "my_mat.h"
int main(){
    char c;
    int m[10][10];
    int terminate = 0;
    while(terminate == 0){
        scanf("%c", &c);
        if (c == 'A'){
            for(int i = 0; i<10; i++){
                for(int j = 0; j<10; j++){
                    scanf("%d", &m[i][j]);
                }
            }
        }
        if (c == 'B'){
            int i, j;
            scanf("%d, %d", &i, &j);
            if(func2(m, i, j) != 0) printf("True \n");
            else printf("False \n");
        }
        if (c == 'C'){
            int i, j;
            scanf("%d, %d", &i, &j);
            int v = func3(m, i, j);
            if(v==0) v = -1;
            printf("%d", v); 
        }
        if (c == 'D'){
            terminate = 1;
        }
    }
    return 0;
}