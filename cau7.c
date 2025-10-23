#include <stdio.h>

long long giai_thua(int n) {
    if (n < 0) {
        printf("Khong co giai thua cho so am!\n");
        return -1;
    }

    long long ket_qua = 1;
    for (int i = 1; i <= n; i++) {
        ket_qua *= i;
    }
    return ket_qua;
}