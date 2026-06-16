#include <stdio.h>
#include <stdlib.h>

/* Ham hoan doi 2 gia tri */
void hoanDoi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Ham doc du lieu tu file vao mang */
int docFile(int a[], int *n) {
    int i;
    FILE *fp = fopen("data_49.txt", "r");
    if (fp == NULL) {
        return 0; /* Tra ve 0 neu mo file that bai */
    }
    /* Doc dong 1: So luong phan tu */
    fscanf(fp, "%d", n);
    /* Doc dong 2: Danh sach cac phan tu */
    for (i = 0; i < *n; i++) {
        fscanf(fp, "%d", &a[i]);
    }
    fclose(fp);
    return 1; /* Tra ve 1 neu doc file thanh cong */
}

/* Chuc nang 1: Xuat mang */
void xuatMang(int a[], int n) {
    int i;
    printf("Danh sach cac phan tu trong mang: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

/* Chuc nang 2: Tim gia tri lon nhat */
int timMax(int a[], int n) {
    int i;
    int max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

/* Chuc nang 3: Tim gia tri nho nhat */
int timMin(int a[], int n) {
    int i;
    int min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

/* Chuc nang 4: Tinh tong mang */
int tinhTong(int a[], int n) {
    int i;
    int tong = 0;
    for (i = 0; i < n; i++) {
        tong += a[i];
    }
    return tong;
}

/* Chuc nang 5: Sap xep tang dan (Bubble Sort) */
void sapXepTang(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j] < a[j - 1]) {
                hoanDoi(&a[j], &a[j - 1]);
            }
        }
    }
    printf("Da sap xep mang tang dan xong! Bam phim 1 de xem ket qua.\n");
}

/* Chuc nang 6: Sap xep giam dan (Bubble Sort) */
void sapXepGiam(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j] > a[j - 1]) {
                hoanDoi(&a[j], &a[j - 1]);
            }
        }
    }
    printf("Da sap xep mang giam dan xong! Bam phim 1 de xem ket qua.\n");
}

/* Ham hien thi menu */
void hienThiMenu() {
    printf("\n================ MENU ================\n");
    printf("1. Xuat mang\n");
    printf("2. Tim max\n");
    printf("3. Tim min\n");
    printf("4. Tinh tong\n");
    printf("5. Sap xep mang tang dan\n");
    printf("6. Sap xep mang giam dan\n");
    printf("0. Thoat chuong trinh\n");
    printf("======================================\n");
    printf("Nhap lua chon cua ban (0-6): ");
}

int main() {
    int a[100];
    int n = 0;
    int luachon;

    /* Goi ham doc file, neu that bai thi dung chuong trinh */
    if (!docFile(a, &n)) {
        printf("Loi: Khong the mo file data_49.txt!\n");
        return 1;
    }
    printf("Da tai du lieu tu file data_49.txt thanh cong!\n");

    do {
        hienThiMenu();
        scanf("%d", &luachon);
        switch (luachon) {
            case 1:
                xuatMang(a, n);
                break;
            case 2:
                printf("Gia tri lon nhat (Max) la: %d\n", timMax(a, n));
                break;
            case 3:
                printf("Gia tri nho nhat (Min) la: %d\n", timMin(a, n));
                break;
            case 4:
                printf("Tong cac phan tu trong mang la: %d\n", tinhTong(a, n));
                break;
            case 5:
                sapXepTang(a, n);
                break;
            case 6:
                sapXepGiam(a, n);
                break;
            case 0:
                printf("Tam biet! Chuong trinh ket thuc.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long nhap lai tu 0 den 6.\n");
        }
    } while (luachon != 0);

    return 0;
}
