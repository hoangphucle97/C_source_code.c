// Nhập n và đếm số lượng chữ số của n và in ra kết quả.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, c;
    printf("Nhập n:");
    scanf("%d", &n);
    
    c = 0;
    while(n != 0) {
        ++ c;
        n /= 10;
    }
    printf("Số lượng chữ số là: %d", c);
}