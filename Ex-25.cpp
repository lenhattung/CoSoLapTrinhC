#include<stdio.h>
int main(){
	int m, n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	printf("Nhap vao so m: ");
	scanf("%d", &m);
	
	int a = n;
	int b = m;
	
	// Vong lap while
	while(a!=b){
		if (a>b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	printf("USCLN(%d,%d) = %d", n, m, a);
	
}
