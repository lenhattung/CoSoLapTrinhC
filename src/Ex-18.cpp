#include<stdio.h>
int main(){
	float a,b,x;
	printf("Nhap vao a: ");
	scanf("%f", &a);
	printf("Nhap vao b: ");
	scanf("%f", &b);
	printf("Phuong trinh: %.2fx+%.2f=0 \n",a , b);
	
	if(a!=0){
		x = -b/a;
		printf("Phuong trinh co nghiem x = %.2f", x);
	}else{
		// a==0
		if(b==0){
			// 0x+0 = 0
			printf("Phuong trinh co vo so nghiem!");
		}else{
			// 0x + 5 = 0
			printf("Phuong trinh vo nghiem!");
		}
	}
}
