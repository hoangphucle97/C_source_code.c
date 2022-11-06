// Nhập vào n và tính tổng sau, kết quả in ra màn hình. S=1^3+2^3+3^3+4^3+......+n^3.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i,s;
    printf("Nhập n:");
    scanf("%d", &n);

    i = 0;
    s = 0;
    do {
        s += i * i * i;
        i++;
    } while (i <= n);
    printf(" Vậy s = %d", s);
}
