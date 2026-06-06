#include<stdio.h>
int main(){
	int i, n, x;

	// in bang cuu chuong n
	for(x=2; x<=10; x++){
		printf("Bang cuu chuong %d\n", x);
		for(i=1; i<=10; i++){
			printf("%d x %d = %d\n", x, i, x*i);
		}
		printf("------------\n");
	}
		
	return 0;
}
