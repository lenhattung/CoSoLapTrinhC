// Bai tap => Ex_14.c
// Nhap vao diem A(xA, yA) B(xB, yB)
// Tinh do dai doan thang AB
#include<stdio.h>
#include<math.h>
int main(){
	double xA, yA, xB, yB;
	double distanceAB;
	printf("Nhap vao xA, yA: ");
	scanf("%lf%lf", &xA, &yA);
	printf("Nhap vao xB, yB: ");
	scanf("%lf%lf", &xB, &yB);
	// pow(x,y) =>x^y;
	// sqrt(x) = CanBacHai(x)
	distanceAB = sqrt(pow(xB-xA, 2)+pow(yB-yA, 2));
	printf("Khoang cach AB = %.2f", distanceAB);
	return 0;
}
