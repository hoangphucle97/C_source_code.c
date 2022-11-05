// Nhập n không âm, tính và in ra n!. n!=1.2.3......n
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, s;
    printf("Nhập n:");
    scanf("%d", &n);

    s = 1;
    for(i = 1; i <= n; i++) {
        s *= i;
        printf("%d", i);  
    }
printf(" %d! = %d", n, s);
}