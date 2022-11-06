// Nhập vào giá trị của n nguyên dương, tính tổng sau và in kết quả ra màn hình. S=1 2+22+32+42+.....+n2.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i , s;
    printf("Nhập n:");
    scanf("%d", &n);
    
    s = 0;
    i = 0;
    do {
        s += i * i;
        i ++;
    } while( i <= n);
printf("Vậy  S = 1^2 + 2 ^2 + ... + n^2 = %d", s);
}