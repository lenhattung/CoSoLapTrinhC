#include <stdio.h>
#include <math.h>

// Khai bao ham
void input(int *n);
int kiemTraSNT(int n);
void lietKeSNT(int n);
int demSNT(int n);
int tinhTongSNT(int n);
float trungBinhSNT(int n);
void XuatMenu();

// Cai dat ham

void input(int *n) {
    do {
        printf("Nhap vao so nguyen (0 < n < 100): ");
        scanf("%d", n);
    } while (*n <= 0 || *n >= 100);
}

int kiemTraSNT(int n) {
    if (n < 2) return 0;
    int check = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            check = 0;
            break;
        }
    }
    return check; // 1 -> SNT; 0 -> Khong la SNT
}

void lietKeSNT(int n) {
    printf("Cac so nguyen to tu 1 den %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (kiemTraSNT(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int demSNT(int n) {
    int dem = 0;
    for (int i = 2; i <= n; i++) {
        if (kiemTraSNT(i) == 1) {
            dem++;
        }
    }
    return dem;
}

int tinhTongSNT(int n) {
    int tong = 0;
    for (int i = 2; i <= n; i++) {
        if (kiemTraSNT(i) == 1) {
            tong += i;
        }
    }
    return tong;
}

float trungBinhSNT(int n) {
    int dem = demSNT(n);
    if (dem == 0) {
        printf("Khong co so nguyen to nao trong pham vi nay!\n");
        return 0;
    }
    int tong = tinhTongSNT(n);
    float trungbinh = (float)tong / dem;
    printf("Trung binh cua cac so nguyen to tu 1 den %d: %.2f\n", n, trungbinh);
    return trungbinh;
}

// Xuat Menu
void XuatMenu() {
	 printf("\n\n--------------------------\n");
    printf("1: Liet ke so nguyen to tu 1 den n\n");
    printf("2: Dem so luong so nguyen to\n");
    printf("3: Tinh tong cac so nguyen to\n");
    printf("4: Tinh trung binh cac so nguyen to\n");
    printf("0: Thoat\n");
}

// ===== HAM MAIN =====
int main() {
    int chon;
    do {
        XuatMenu(); // hien thi menu cho nguoi dung chon
        printf("Hay chon cong viec: ");
        scanf("%d", &chon);

        switch (chon) {
            case 1: {
                int n;
                input(&n);
                lietKeSNT(n);
                break;
            }
            case 2: {
                int n;
                input(&n);
                printf("So luong so nguyen to tu 1 den %d: %d\n", n, demSNT(n));
                break;
            }
            case 3: {
                int n;
                input(&n);
                printf("Tong cac so nguyen to tu 1 den %d: %d\n", n, tinhTongSNT(n));
                break;
            }
            case 4: {
                int n;
                input(&n);
                trungBinhSNT(n);
                break;
            }
            default:
                chon = 0;
        }
    } while (chon != 0);

    return 0;
}
