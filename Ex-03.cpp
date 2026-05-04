#include <stdio.h> 
int main() {
    int x; // Khai bao x
    printf("Nhap so nguyen x = ");
    scanf("%d", &x); // Nhap x
    printf("So nguyen vua nhap la: %d.\n", x);
    
    float y,z;
    printf("Nhap y va z: ");
    scanf("%f%f", &y, &z);
    printf("So thuc vua nhap la: y=%.2f, z=%.2f.\n", y, z);
    return 0;
}

