#include <stdio.h>

void nhapMang(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int timMax(int a[], int n) {
    // Tim ra con so lon nhat
    int max = a[0];
	int i;
    for(i = 1; i < n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

int timMin(int a[], int n) {
    // Tim ra con so nho nhat
    return 0;
}

int timViTriMax(int a[], int n) {
    // Tim vi tri cua phan tu lon nhat
    return 0;
}

int laSoNguyenTo(int x) {
    // Kiem tra x co phai so nguyen to hay khong
    return 0;
}

void timSoNguyenTo(int a[], int n) {
    // Xuat cac so nguyen to trong mang
}

int tinhTong(int a[], int n) {
    int tong = 0;
    int i;

    for (i = 0; i < n; i++) {
        tong += a[i];
    }

    return tong;
}

int main() {
    int n;
    int a[100];

    printf("Nhap so phan tu n = ");
    scanf("%d", &n);

    nhapMang(a, n);

    printf("Mang vua nhap: ");
    xuatMang(a, n);

    printf("Tong = %d\n", tinhTong(a, n));
    printf("Max = %d\n", timMax(a, n));
    printf("Min = %d\n", timMin(a, n));
    printf("Vi tri Max = %d\n", timViTriMax(a, n));

    printf("Cac so nguyen to trong mang: ");
    timSoNguyenTo(a, n);

    return 0;
}
