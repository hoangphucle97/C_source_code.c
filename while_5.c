// tính tổng các chữ số là số chẵn và tổng các chữ số là số lẻ, in ra 2 tổng chẵn lẻ trên 2 dòng.
#include <stdio.h>
#include <conio.h>

void main()
{
    int n, i, tongchan, tongle;
    printf("Nhập n: ");
    scanf("%d", &n);

    tongchan = 0;
    i = 0;
    while (n != 0) {
        if( n % 2 == 0) {
        tongchan += n % 10; }
        if(i % 2 == 1) {
            tongle += i % 10;
        }
        n = n / 10;
    }
    printf("Tổng số chẵn là %d \n", tongchan);
    printf("Tổng số lẻ là %d \n", tongle);
}