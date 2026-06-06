#include<stdio.h>

void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}


int main(){
	int n;
    int a[100];

    printf("Nhap so phan tu n = ");
    scanf("%d", &n);

    nhapMang(a, n);

    printf("Mang vua nhap: ");
    xuatMang(a, n);

    return 0;
}
