#include<stdio.h>
int main(){
	int a, b, c, max;
	printf("Nhap vao a = ");
	scanf("%d", &a); // 15
	printf("Nhap vao b = ");
	scanf("%d", &b); // 2
	printf("Nhap vao c = ");
	scanf("%d", &c); // 90
	max = a;			// max = 15
	if (b>max){			// 2>15 -> false	
		max = b;		// khong thuc duoc thuc thi
	}
	
	if (c>max){			// 90>15 -> true
		max = c;		// max = 90
	}
	
	printf("Max = %d", max);	
}
