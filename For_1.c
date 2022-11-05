// Nhập vào n nguyên dương, tính và in tổng sau ra màn hình. Tính S=2+4+6+8+......+2*n.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, tong;
    printf("Nhập n:");
    scanf("%d", &n);

    tong = 0;
    for(i = 1; i <= n; i++) {
        tong += 2 * i;
        printf ("%d", i);
    }
    printf( " S = 2 + 4 + ... + 2*%d = %d", n, tong);
}