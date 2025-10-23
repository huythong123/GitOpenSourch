#include<stdio.h>

void hienThi(int x){
    int i, j;
    for (i = 1; i<= x; i++){
        for(j = 1; j <= i; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}