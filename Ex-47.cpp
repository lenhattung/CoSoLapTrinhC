#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp;
	char text[256];
	
	// --- Phan 2: Doc file
	fp = fopen("data_45.txt", "r"); // Mo file ra de doc du lieu
	if(fp == NULL){
		printf("Khong the mo file de doc!\n");
		return 1;
	}

	// Doc du lieu tu ben trong file
	// Doc tung dong du lieu cho toi cuoi file EOF - End of file
	while(fgets(text, sizeof(text), fp)!=NULL){
		printf("%s", text);
	}
	
	// Dong file la de giai phong bo nho
	fclose(fp);
	
	return 0;
}
