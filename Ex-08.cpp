#include<stdio.h>
int main()
{
    //cau a
    //Buoc 1: khai bao so nguyen a
    int a;
    printf("Moi nhap 1 so nguyen: ");
    //Buoc 2: nhap so nguyen a
    scanf("%d", &a);
    //Buoc 3: kiem tra gia tri so nguyen a vua nhap dung hay khong
    printf("So nguyen da nhap la %d \n", a);
    fflush(stdin); //xoa bo nho dem
    //cau b tuong tu
    float b;
    printf("Moi nhap 1 so thuc: ");
    scanf("%f", &b);
    printf("So thuc da nhap la %f \n", b);
    //cau c
    char z;
    printf("Moi nhap 1 ki tu: ");
    fflush(stdin); //xoa bo nho dem
    scanf("%c", &z);
    printf("Ki tu da nhap la %c\n", z);
    //cau d
    int x, y, z1;
    printf("Moi nhap hai so nguyen de cong: ");
    scanf("%d%d", &x, &y);
    z1 = x + y;
    printf("Tong hai so la %d\n", z1);
    return 0;
}
