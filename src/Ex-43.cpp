// Mang 2 chieu
/*
1 2 3
4 5 6
7 8 9
10 11 12
=> Day la mang 2 chieu co 4 dong, co 3 cot
a[4][3]
*/

// Sap xep mang
#include<stdio.h>

void nhapMang(int a[100][100], int n, int m) {
	int i = 0;
	int j = 0;
    for (i=0; i < n; i++) {
    	for(j=0; j<m; j++){
    		printf("a[%d, %d] = ", i, j);
        	scanf("%d", &a[i][j]);
		}
    }
}

void xuatMang(int a[100][100], int n, int m) {
   	int i = 0;
   	int j = 0;
    for (i=0; i < n; i++) {
    	for(j=0; j<m; j++){
    		printf("%d ", a[i][j]);
		}
		printf("\n");
    }
    printf("\n");
}

// 43
int tinhTong(int a[100][100], int n, int m) {
  
}

int timMax(int a[100][100], int n, int m) {
  
}

int timMin(int a[100][100], int n, int m) {
  
}

int sapXepTang(int a[100][100], int n, int m) {
  // Tang
}

int main(){
	int a[100][100];
	int n, m;
	printf("Nhap vao so dong: ");
	scanf("%d", &n);
	printf("Nhap vao so cot: ");
	scanf("%d", &m);
	nhapMang(a, n, m);
	xuatMang(a, n, m);
}
