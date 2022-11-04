// Nhập một số nguyên dương n. Xuất ra số ngược lại
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, sodao;
    printf("Nhập số nguyên dương:");
    scanf("%d", &n);
    while(n > 0) {
        sodao = sodao * 10 + n % 10; n = n / 10;
    }
    printf("Số đảo của là: %d", sodao);
}
