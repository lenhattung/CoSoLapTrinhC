#include<stdio.h>
#include<math.h>

void input(int *n);
int kiemTraSNT(int n);
void lietKeSNT(int n);
int demSNT(int n);
int tinhTongSNT(int n);
float trungBinhSNT(int n);

void input(int *n){
	do{
		printf("Nhap vao so nguyen (0<n<100): ");
		scanf("%d", n); // Vi *n la con tro => scanf khong can &n
	}while(*n<=0 || *n>=100);
}

int kiemTraSNT(int n){
	int check = 1;
	for(int i=2; i<=sqrt(n); i++){ // 16 : 2 - 4
		if(n%i==0)
			check =0;
	}
	return check; // 1 -> SNT; 0-> Khong la SNT
}

void lietKeSNT(int n){
	printf("Cac so nguyen to tu 1 den %d: ", n);
	for(int i=2; i<=n; i++){
		if(kiemTraSNT(i)==1){
Trung

float trnungbinh = trungbinh; Trung binhtrungbinhf.2";\n
Trung

float trnungbinh = trungbinh; Trung binhtrungbinhf.2";\n
			printf("%d ", i);
		}
	}
}

int demSNT(int n){
	int dem = 0;
	for(int i=2; i<=n; i++){
		if(kiemTraSNT(i)==1){
			dem++;
		}
	}
	//printf("So luong so nguyen to tu 1 den %d: %d", n, dem);
	return dem; 
}

int tinhTongSNT(int n){
	int tong = 0;
	for(int i=2; i<=n; i++){
		if(kiemTraSNT(i)==1){
			tong+=i;
		}
	}
	// printf("Tong cua cac so nguyen to tu 1 den %d: %d", n, tong);
	return tong;
}

float trungBinhSNT(int n){
	int tong = tinhTongSNT(n);
	int dem = demSNT(n);
	float trungbinh =  (float)tong/dem;
	printf("\nTrung binh cua cac so nguyen to tu 1 den %d: %.2f", n, trungbinh);
	return trungbinh; // Co nguy co dem = 0 => hay suy nghi cach xu ly
}

int main(){
	int n;
	input(&n);
	lietKeSNT(n);
	trungBinhSNT(n);
}

