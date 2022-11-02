// Nhập một số nguyên dương n. S = 1^2 + 2^2 + … + n^2
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, s, i;
    printf("Nhập n:");
    scanf("%d", &n);

    s = 0;
    for(i = 1; i <= n; i ++)
        s = s + i*i;
    printf(" S =  1^2 + 2^2 + … + %d^2 = %d", n, s);
}