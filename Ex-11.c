// Chuong 1 - Cau 6 trang 7 => Ex_11.c
// Viet mot chuong trinh dao nguoc mot so nguyen co dung 3 chu so

#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao n = ");
	scanf("%d", &n);
	printf("So ban dau: %d\n", n);
	// 123 => 321
	int x1 = n%10; // 123%10 = 3
	n/=10;  // n/=10 <=> n = n/10; => n=12
			// n+=10 <=> n = n+10;
			// n*=10 <=> n = n *10;
	int x2 = n%10; 	// 12%10 = 2
	n/=10;			// 12/10 = 1	
	int x3 = n%10;	// 1%10 = 1
	n/=10;
	
	printf("So bi dao nguoc: %d%d%d", x1,x2,x3);
	return 0;
}
