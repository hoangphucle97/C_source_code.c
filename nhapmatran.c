#include <stdio.h>
#include <conio.h>

void main ()
{
    int a[100][100], m, n, i, j;
    printf("Nhập số dòng, số cột của ma trận [m] X [n]:");
    scanf("%d%d", &m, &n);

    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
    printf("Nhập a [%d][%d]:", i, j);
    scanf("%d", &a[i][j]);
        }printf("\n");
    }
}
