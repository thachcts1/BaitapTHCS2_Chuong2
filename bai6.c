#include <stdio.h>

int main() {
    int n, tong = 0, dem = 0;
    float tb;

    do {
        printf("Nhap so (nhap 0 de dung): ");
        scanf("%d", &n);
        if (n != 0) {
            tong += n;
            dem++;
        }
    } while (n != 0);

    if (dem > 0)
        tb = (float)tong / dem;
    else
        tb = 0;

    printf("Tong: %d\n", tong);
    printf("Trung binh: %.2f\n", tb);
    return 0;
}
