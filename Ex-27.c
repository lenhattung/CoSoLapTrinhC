#include <stdio.h>

long giaithua(int n); // khai bao ham

// cai dat ham
long giaithua(int x){
	long gt = 1;
	int i;
	for(i=1; i<=x; i++){
		gt*=i; // gt = gt * i;
	}
	return gt;
}

// ham main
int main(){
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	long v = giaithua(n);
	printf("%d! = %ld", n, v);
	return 0;
}
