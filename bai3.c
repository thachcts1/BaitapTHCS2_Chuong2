#include <stdio.h>

int main() {
    int n, i, tong = 0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac so: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0)
            tong += arr[i];
    }

    printf("Tong cac so le trong day la: %d\n", tong);
    return 0;
}
