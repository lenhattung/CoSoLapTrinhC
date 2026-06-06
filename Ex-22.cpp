#include<stdio.h>
int main(){
	int i, n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("%d. Em hua se khong diem danh giup ban nua!\n", i);
	}
	
	return 0;
}
