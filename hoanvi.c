// Hoán vị các số nguyên bất kỳ
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, hoanvi;
    printf("Nhập giá trị a:");
    scanf("%d", &a);
    printf("Nhập giá trị b:");
    scanf("%d", &b);

    hoanvi = a;
    a = b;
    b = hoanvi;
    printf("Số hoán vị = %d ", hoanvi);
    printf("Số a = %d ", a);
    printf("Số b = %d ", b);
}