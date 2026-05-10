// Chuong 1 - Cau 7 trang 7 => Ex_12.c
// Viet mot chuong trinh dao nguoc mot so nguyen co dung 3 chu so
#include<stdio.h>
int main(){
	int a, b;
	printf("Nhap vao gia tri a: ");
	scanf("%d", &a);
	printf("Nhap vao gia tri b: ");
	scanf("%d", &b);
	printf("Truoc khi hoan vi a=%d, b=%d\n", a,b);
	int temp = a;
	a = b;
	b = temp;
	printf("Sau khi hoan vi a=%d, b=%d", a,b);
	return 0;
}
