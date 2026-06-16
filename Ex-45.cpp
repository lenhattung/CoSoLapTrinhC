#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char text[256];
	
	// --- Phan 1: Ghi file
	fp = fopen("data_45.txt", "w"); // Mo file ra de ghi du lieu
	if(fp == NULL){
		printf("Khong the tao hoac mo file de ghi!\n");
		return 1;
	}
	
	printf("Nhap vao 1 chuoi van ban: ");
	fgets(text, sizeof(text), stdin); 
	// Doc du lieu vao bien text
	// Kich co toi da la sizeof(text) = 100
	// stdin => ban phim
	
	// Ghi du lieu vao ben trong file
	fprintf(fp, "%s", text);
	
	// Dong file la de giai phong bo nho
	fclose(fp);
	
	printf("Da ghi file thanh cong!");
	return 0;
}
