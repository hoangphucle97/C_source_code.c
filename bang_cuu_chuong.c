// Nhập số ngẫu nhiên để in ra bảng cửu chương.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i;
    printf("Nhập n:");
    scanf("%d", &n);
    
    for(i = 1; i < 11; i++)
    printf("Vậy %3d x %2d = %3d \n", n, i, n*i);
}