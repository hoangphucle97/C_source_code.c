// Nhập một số nguyên dương n. S = 1 + 2 + … + n.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, s, i;
    printf("Nhập n:");
    scanf("%d", &n);

    s = 0;
    for(i = 1; i <= n; i++)
        s = s + i;
    printf("1 + 2 + ... + %d = %d", n, s);
}
/*
void main()
{
    int n, tongso, i;
    printf(" Nhập n:");
    scanf("%d", &n);
    
    tongso = 0;
    for(i = 1; i <= n; i++) {
        tongso += i;
        printf("%d", i);
}
        printf("Vậy S = 1 + 2 + 3 + ... + %d = %d", n, tongso);
}
*/