#include<stdio.h>
int main(){
	int a,b;
	char phep_tinh;
	printf("Nhap vao phep tinh (+, - =, *, /): ");
	scanf("%c", &phep_tinh);
	printf("Nhap a, b: ");
	scanf("%d%d", &a, &b);
	switch(phep_tinh){
		case '+':
			printf("%d + %d = %d", a,b, a+b);
			break;
		case '-':
			printf("%d - %d = %d", a,b, a-b);
			break;
		case '*':
			printf("%d * %d = %d", a,b, a*b);
			break;
		case '/':
			printf("%d / %d = %.2f", a,b, (float)a/b);
			break;
		default:
			printf("Phep tinh khong dung!");
	}
}
