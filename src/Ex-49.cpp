// Ex - 49
#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int a[100];
	
	// Nhap du lieu tu file
	FILE *fp;
	fp = fopen("data_49.txt", "r");
	if(fp==NULL){
		printf("Khong mo duoc file de doc du lieu!");
		return 1;
	}
	
	// Doc so luong phan tu
	fscanf(fp, "%d", &n);
	
	// Doc lan luot cac phan tu vao mang
	int i;
	for(i=0; i<n; i++){
		fscanf(fp, "%d", &a[i]);
	}
	
	// Xuat mang ra man hinh
	printf("Danh sach %d phan tu trong mang: ", n);
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
