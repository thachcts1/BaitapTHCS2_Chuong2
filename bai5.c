#include <stdio.h>

int main() {
    int choice, a, b;

    do {
        printf("\n|------ MENU ------|\n");
        printf("1. Tinh tong hai so\n");
        printf("2. Tinh hieu hai so\n");
        printf("3. Tinh tich hai so\n");
        printf("4. Thoat\n");
        printf("Chon chuc nang: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            printf("Nhap so thu nhat: ");
            scanf("%d", &a);
            printf("Nhap so thu hai: ");
            scanf("%d", &b);
        }

        switch (choice) {
            case 1: printf("Tong hai so la: %d\n", a + b); break;
            case 2: printf("Hieu hai so la: %d\n", a - b); break;
            case 3: printf("Tich hai so la: %d\n", a * b); break;
            case 4: printf("Chuong trinh ket thuc!\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choice != 4);

    return 0;
}
