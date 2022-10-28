// Nhập 2 số a và b. Tính tổng, hiệu, tính và thương của hai số đó.
#include <stdio.h>
#include <conio.h>

void main()
{
    float a, b, Tong, Tich, Thuong, Hieu;
    printf("Nhập giá trị của a và b: \n");
    scanf("%f%f", &a, &b);
    Tong = a + b;
    printf("Tổng là: %.2f \n", Tong);
    Tich = a * b;
    printf("Tích là: %.2f \n", Tich);
    Hieu = a - b;
    printf("Hiệu là: %.2f \n",Hieu);
    Thuong = a / b;
    printf("Thương là: %.2f \n", Thuong);
}