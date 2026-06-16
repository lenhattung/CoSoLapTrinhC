#include<stdio.h>
#define PI 3.1315

int main(){
	printf("LE NHAT TUNG\n");
	// const float PI = 3.1514;
	float r = 0;
	printf("Nhap r = ");
	scanf("%f", &r);
	float dienTich = PI*r*r;
	float chuVi = 2*PI*r;
	printf("DT=%.2f\n", dienTich);
	printf("CV=%.2f", chuVi);
	return 0;
}
