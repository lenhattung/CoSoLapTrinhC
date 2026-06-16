#include <stdio.h>

void tang(int x){ // Truyen tham tri => chi truyen vao gia tri
    x = x + 1;
}

void increase(int *x){ // Truyen tham bien, *x la dia chi cua bien x
	*x = *x +1;
}

int main(){
    int a = 5;
    tang(a); // => copy gia tri cua a
    printf("a= %d\n", a);
	
	int b = 5;
    increase(&b); // => &b la dia chi cua bien b tren bo nho may tinh
    printf("b= %d", b);
    return 0;
}
