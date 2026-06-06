#include<stdio.h>

int main(){
	// Khai bao mang
	int a[100];
	int i=0;
	int n = 0; // So luong phan tu
	do{
		printf("Nhap vao n (0<n<=100): ");
		scanf("%d", &n);
	}while(n<=0 || n>100);
	
	for(i=0; i<n; i++){
		printf("Nhap vao a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	printf("a[0]: %d\n", a[0]);
	printf("a[5]: %d\n", a[5]);
	
	printf("\nDanh cac so vua nhap la: ");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}
