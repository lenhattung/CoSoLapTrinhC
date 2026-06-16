#include <stdio.h>

int main()
{
    float a, b;   // hai canh cua hinh chu nhat

    // Nhap du lieu
    printf("Nhap canh a: ");   scanf("%f", &a);
    printf("Nhap canh b: ");   scanf("%f", &b);

    // Tinh toan
    float chuvi    = 2 * (a + b);
    float dientich = a * b;

    // Xuat ket qua
    printf("Chu vi     = %.2f\n", chuvi);
    printf("Dien tich  = %.2f\n", dientich);

    return 0;
}

