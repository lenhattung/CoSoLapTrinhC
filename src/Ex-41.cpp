// Sap xep mang
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

void sapXepTang(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[j]<a[i]){
				int temp = a[i];
				a[i]= a[j];
				a[j]= temp;
			}
		}
	}
}

void sapXepGiam(int a[], int n){
	//????
}

int main(){
	int a[100];
	int n;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n);
	nhapMang(a, n);
	xuatMang(a, n);
	sapXep(a, n);
	printf("Mang sau khi sap xep: \n");
	xuatMang(a, n);
	
	
}
