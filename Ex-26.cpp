#include<stdio.h>
#include<math.h>

// Ham kiem tra so nguyen to: tra ve 1 neu dung, tra ve 0 neu sai
int ktSoNguyenTo(int x){
	if(x<2){
		return 0; // So nho hon 2 khong phai so nguyen to
	}
	
	int i;
	for(i =2; i<=sqrt(x); i++){
		if (x%i==0){		// Tim thay uoc so khac 1 va chinh no
			return 0; 
		}
	}
	
	return 1;
	
}

int main(){
	int n;
	
	do {
		printf("Nhap vao so duong n: ");
		scanf("%d", &n);
	} while(n<=0);
	
	// In tat ca so nguyen to tu 1 toi n
	 printf("Cac so nguyen to tu 1 den %d la:\n", n);
	int i;
	for(i=1; i<=n; i++){
		if(ktSoNguyenTo(i))
			printf("%d ", i);
	}
	
	return 0;
}
