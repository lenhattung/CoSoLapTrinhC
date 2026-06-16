#include<stdio.h>
int main(){
	int i, n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	int tong = 0;
	// su dung vong lap de tinh tong tu 1->n
	for(i=1; i<=n; i++){
		tong+=i; // tong = tong + i;
	}
	printf("Tong tu 1 -> %d = %d", n, tong);
	
	return 0;
}
