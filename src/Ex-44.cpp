// Bai 44
#include <stdio.h>
#include <stdlib.h>

// Ham nhap mang 2 chieu (Ma tran vuong)
void nhapMang(int n, int a[n][n]) {
    int i, j;
    printf("\n--- NHAP MA TRAN VUONG %dx%d ---\n", n, n);
    // TODO
}

// Ham xuat mang 2 chieu
void xuatMang(int n, int a[n][n]) {
   // TODO
}

// Ham tim gia tri nho nhat (Min)
int timMin(int n, int a[n][n]) {
    // TODO
}

// Ham tim gia tri lon nhat (Max)
int timMax(int n, int a[n][n]) {
	// TODO
}

// Ham tinh tong tat ca cac phan tu
int tinhTongTatCa(int n, int a[n][n]) {
    // TODO
}

// Ham tinh tong duong cheo chinh (Quy luat: i == j)
int tinhTongCheoChinh(int n, int a[n][n]) {
    // TODD
}

// Ham tinh tong duong cheo ph? (Quy luat: j = n - 1 - i)
int tinhTongCheoPhu(int n, int a[n][n]) {
    // TODO
}

// Ham Main quan ly Menu dieu khien
int main() {
    int n;
    printf("Nhap cap cua ma tran vuong (n x n): ");
    scanf("%d", &n);

    // Khai bao ma tran dong theo chuan C99 (VLA)
    int a[n][n];
    int luaChon;
    int daNhap = 0; // Bien co hieu de kiem tra sinh vien da nhap mang chua

    do {
        printf("\n================= MENU =================");
        printf("\n1. Nhap mang 2 chieu");
        printf("\n2. Xuat mang 2 chieu");
        printf("\n3. Tim phan tu nho nhat (Min)");
        printf("\n4. Tim phan tu lon nhat (Max)");
        printf("\n5. Tinh tong tat ca cac phan tu");
        printf("\n6. Tinh tong duong cheo chinh");
        printf("\n7. Tinh tong duong cheo phu");
        printf("\n0. Thoat chuong trinh");
        printf("\n========================================");
        printf("\nNhap lua chon cua ban: ");
        scanf("%d", &luaChon);

        // Kiem tra neu chon cac chuc nang tinh toan ma chua nhap mang
        if (luaChon >= 2 && luaChon <= 7 && !daNhap) {
            printf("\n[LOI] Ban can phai nhap mang (Chon 1) truoc khi thuc hien!\n");
            continue; 
        }

        switch (luaChon) {
            case 1:
                nhapMang(n, a);
                daNhap = 1; // Danh dau da nhap mang thanh cong
                break;
            case 2:
                xuatMang(n, a);
                break;
            case 3:
                printf("\nGia tri nho nhat (Min) trong ma tran: %d\n", timMin(n, a));
                break;
            case 4:
                printf("\nGia tri lon nhat (Max) trong ma tran: %d\n", timMax(n, a));
                break;
            case 5:
                printf("\nTong cua tat ca cac phan tu: %d\n", tinhTongTatCa(n, a));
                break;
            case 6:
                printf("\nTong cac phan tu tren duong cheo chinh: %d\n", tinhTongCheoChinh(n, a));
                break;
            case 7:
                printf("\nTong cac phan tu tren duong cheo phu: %d\n", tinhTongCheoPhu(n, a));
                break;
            case 0:
                printf("\nTam biet! Chuong trinh dang thoat...\n");
                break;
            default:
                printf("\nLua chon khong hop le! Vui long nhap lai tu 0 den 7.\n");
        }
    } while (luaChon != 0);

    return 0;
}
