// Nhập vào n nguyên dương, tính và in tổng sau ra màn hình. S = 1 + 3 + 5 + 7 +..... + 2*n-1.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, tong;
    printf( "Nhập n:");
    scanf("%d", &n);
    
    tong = 0;
    for(i = 1; i <= n; i++) { // số nguyên dương là số lớn hơn 0.
        tong += 2 * i -1;
        printf("%d", i); 
    }
    printf(" Vậy S = 1 + 3 + 5 + ... + 2*%d-1 = %d ", n, tong);
}