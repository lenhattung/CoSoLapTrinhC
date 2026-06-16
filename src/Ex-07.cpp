#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &n);
	printf("n = %d \n", n);
	// n++ <=> n = n+1; n=5
	printf("%d", ++n); // n=6, print 6
	printf("%d", n++); // print 6 , n=7
	printf("%d", n++); // print 7 , n = 8
	printf("%d", n--); // print 8 , n = 7
	printf("%d\n", --n); // n = 6, print 6
	printf("%d\n", --n); // n = 5, print 5
	
	printf("%d + %d = %d\n", n, 2, n+2);
	printf("%d - %d = %d\n", n, 2, n-2);
	printf("%d * %d = %d\n", n, 2, n*2);
	printf("%d / %d = %.3f\n", n, 2, (float)n/2);
	printf("%d CHIA LAY DU %d = %d\n", n, 2, n%2);
	
	return 0;
}
