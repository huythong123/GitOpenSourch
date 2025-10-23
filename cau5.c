#include <stdio.h>

void tinhtiendien() {
    int n;
    printf("Nhập số điện (kWh): ");
    scanf("%d", &n);

    int gia = 0;
    int tinh = 0;

    if (n <= 100) {
        gia = 500;
    } else if (n >= 150 && n <= 350) {
        gia = 550;
    } else {
        gia = 600;
    }

    tinh = n * gia;

    printf("Biên lai:\n");
    printf("%d kWh × %d = %d đồng\n", n, gia, tinh);
}
