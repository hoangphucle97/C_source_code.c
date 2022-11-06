// Nhập vào n nguyên dương, tính và in tổng sau ra màn hình, chú ý lấy tới 3 số sau dấu thập phân. 
// S=1+1/2+1/3+1/4+....+1/n
#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    float s, i;
    printf("Nhập n:");
    scanf("%d", &n);

    i = 1;
    s = 0;
    do{
        s += 1 / i;
        i ++; 
    } while(i <=n);
    printf("Vậy S = %.2f", s);
}