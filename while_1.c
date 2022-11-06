// NNhập vào n nguyên dương, tính và in tổng sau ra màn hình. S=2+4+..+2*n
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, tong, i, f;
    printf("Nhập n: \n");
    scanf("%d", &n);
    
    i = 0;
    tong = 0;
    while(i <= n) {
        tong += 2 * i;
        i ++;
    }
printf(" S = 2 + 4 + ... + 2*%d = %d ", n, tong);
}