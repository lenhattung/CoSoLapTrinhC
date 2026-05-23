//Ex-31.c Hoan vi gia tri cua 2 so
#include<stdio.h>

void doiCho1(int a, int b){ // truyen tham tri
	int t = a;
	a = b;
	b = t;
}

void doiCho2(int *a, int *b){ // truyen tham bien
	int t = *a;
	*a = *b;
	*b = t;
}

int main(){
    int x = 3;
    int y = 7;

    doiCho1(x, y);
    printf("%d %d\n", x, y);
    
    doiCho2(&x, &y);
    printf("%d %d\n", x, y);
}
