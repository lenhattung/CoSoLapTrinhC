#include<stdio.h>

void nhapMang(int a[], int n) {
	int i = 0;
    for (i=0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
   	int i = 0;
    for (i=0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int timMax(int a[], int n) {
	// Tim ra con so lon nhat
	return 0;
}

int tinhTong(int a[], int n){
	int tong = 0;
	int i = 0;
    for (i=0; i < n; i++) {
		tong+=a[i];
	}
	return tong;
}

int main(){
	int n;
    int a[100];

    printf("Nhap so phan tu n = ");
    scanf("%d", &n);

    nhapMang(a, n);

    printf("Mang vua nhap: ");
    xuatMang(a, n);
    
    printf("Tong = %d", tinhTong(a,n));
    printf("Max = %d\n", timMax(a, n));

    return 0;
}
