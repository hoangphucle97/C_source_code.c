// Nhập vào n và tính tổng sau, kết quả in ra màn hình. S=1^3+2^3+3^3+4^3+......+n^3.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i , s;
    printf("Nhập n:");
    scanf("%d", &n);

        i = 0;
        s = 0;
        while(i <= n) {
        s += i * i * i;
        i ++;
    }
    printf("Vậy %d^3 = %d", n, s);
}
/*
void main()
{
    int n, i, s;
    printf("Nhập n:");
    scanf("%d", &n);

    s = 0;
    for(i =0; i <= n; i++) {
        s += i * i * i;
   }
   printf("Vậy %d^3 = %d", n, s);
}
*/