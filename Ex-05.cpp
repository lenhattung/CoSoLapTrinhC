#include <stdio.h> 
int main() {
   
    int a,b;
    printf("Nhap a va b: ");
    scanf("%d%d", &a, &b);
    
    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %.2f\n", a, b, (float)a/b); // => Ep kieu du lieu
    printf("%d // %d = %d\n", a, b, a%b); // Chia lay phan du
    
    return 0;
}

