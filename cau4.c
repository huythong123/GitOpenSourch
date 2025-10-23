#include <stdio.h>

void xephocluc() {
    float v, t, a, dck;

    printf("Nhập điểm Văn: ");
    scanf("%f", &v);
    printf("Nhập điểm Toán: ");
    scanf("%f", &t);
    printf("Nhập điểm Anh: ");
    scanf("%f", &a);

    dck = (v * 2 + t * 2 + a) / 5;
    printf("Điểm cuối kỳ: %.2f\n", dck);

    if (dck < 3) {
        printf("Học lực yếu\n");
    } else if (dck >= 3 && dck <= 5) {
        printf("Học lực trung bình\n");
    } else if (dck > 5 && dck < 8) {
        printf("Học lực khá\n");
    } else {
        printf("Học lực giỏi\n");
    }
}

