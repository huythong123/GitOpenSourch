#include <stdio.h>

void nhapDayTu1DenN(int n) {
    int i, x;

    while (1) {  
        int dungHet = 1;  

        for (i = 1; i <= n; i++) {
            printf("Nhap so thu %d: ", i);
            scanf("%d", &x);

            if (x != i) {
                printf("Sai roi! Ban nhap %d nhung phai la %d.\n", x, i);
                printf("Nhap sai, bat dau lai tu 1!\n\n");
                dungHet = 0;   
                break;         
            }
        }

        if (dungHet) {
            printf("\nChuc mung! Ban da nhap dung tu 1 den %d.\n", n);
            break;  
        }
    }
}


