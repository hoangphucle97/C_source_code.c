// Nhập vào giá trị n , tính tổng các số nguyên dương không vượt quá n, chia hết cho 3.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, tong;
    printf("Nhập n:");
    scanf("%d", &n);
    tong = 0;
    for(i = 0;i < n; i++) {
        if (i % 3 == 0)
    tong += i;
    }
    printf("tổng các số nguyên dương không vượt quá n, chia hết cho 3 là %d", tong);
}
