// Nhập n không âm, tính và in ra n!. n!=1.2.3......n
#include <stdio.h>
#include <conio.h>

void main()
{
    int tich, n, i;
    printf("Nhập n:");
    scanf("%d", &n);

    tich = 1;
    i = 1;
    while(i <= n) {
        tich *= i;
        i ++;
    }
    printf("Vậy %d! = %d", n , tich);
}