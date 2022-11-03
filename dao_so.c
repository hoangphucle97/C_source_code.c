//  Nhập 3 số nguyên a, b và n với a, b < n. Tính tổng các số nguyên dương nhỏ hơn n chia hết cho a nhưng không chia hết cho b.
#include <stdio.h>
#include <conio.h>

void main()
{
int a, b, n, i, s;
do
{
    printf("Nhap a, b, n: ");
    scanf("%d%d%d", &a, &b, &n);
} while (a >= n || b >= n);
s = 0;
    for (i = 1; i <= n - 1; i++)
        if (i % a == 0 && i % b != 0)
            s = s + i;
printf("Tong cac thoa yeu cau la %d", s);
}