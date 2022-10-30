// Nhập vào số điện thoại (gồm 10 chữ số) của bạn. Cho biết số điện thoại của bạn được mấy nút?
#include <stdio.h>
#include <conio.h>

void main ()
{
    int n;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, sonut;
    printf("Nhập số điện thoại của bạn:");
    scanf("%d", &n);
    n10 = n % 10; n =n / 10;
    n9 = n % 10; n = n / 10;
    n8 = n % 10; n = n / 10;
    n7 = n % 10; n = n / 10;
    n6 = n % 10; n = n / 10;
    n5 = n % 10; n = n / 10;
    n4 = n % 10; n = n / 10;
    n3 = n % 10; n = n / 10;
    n2 = n % 10; n = n / 10;
    n1 = n % 10; n = n / 10;
    sonut = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) % 10;
    printf("Số nút của bạn là: %d", sonut);
}