#include <stdio.h>

int max (int x, int y); // khai bao ham

// cai dat khai ham
int max(int x, int y){
	/*
	if (x> y){
		return x;
	}else {
		return y;
	}
	*/
	return (x>y)?x:y;
}
// ham main
int main(){
	int a,b,c,z;
	printf("Nhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);
	printf("Nhap vao c: ");
	scanf("%d", &c);
	z = max(max(a,b), c); // so sanh giua 3 so tim max
	// z = max(max(a,b), max(c,d)); // so sanh giua 4 so tim max
	// z  
	printf("Max = %d", z);
	return 0;
}
