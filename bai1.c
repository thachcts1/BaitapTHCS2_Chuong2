#include <stdio.h>

int main() {
    char ten[50];
    int tuoi;

    printf("Nhap ten: ");
    gets(ten);
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);

    printf("Ten ban la %s, ban %d tuoi.\n", ten, tuoi);
    return 0;
}
