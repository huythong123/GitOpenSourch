#include <stdio.h>
#include <math.h>

void giaiptb2() {
    float a, b, c;

    printf("Nhập a: ");
    scanf("%f", &a);
    printf("Nhập b: ");
    scanf("%f", &b);
    printf("Nhập c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0)
                printf("Phương trình có vô số nghiệm.\n");
            else
                printf("Phương trình vô nghiệm.\n");
        } else {
            printf("Phương trình có một nghiệm: x = %.2f\n", -c / b);
        }
    } else {
        float d = b * b - 4 * a * c;

        if (d < 0) {
            printf("Phương trình vô nghiệm.\n");
        } else if (d == 0) {
            printf("Phương trình có nghiệm kép: x = %.2f\n", -b / (2 * a));
        } else {
            float x1 = (-b + sqrt(d)) / (2 * a);
            float x2 = (-b - sqrt(d)) / (2 * a);
            printf("Phương trình có 2 nghiệm phân biệt:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}
