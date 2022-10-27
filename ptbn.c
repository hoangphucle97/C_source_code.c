#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    printf("Nhập giá trị a và b:");
    scanf("%d%d", &a, &b);
    // ax + b = 0
    if ( a == 0 && b == 0) {
        printf("Phương trình VSN");
    } else if ( a == 0 && b != 0) {
        printf("Phương trình vô nghiệm");
    } else {
        printf("x= %.2f", -(float)b/(float)a);
    }

    // Logic cu, di chia TH a roi kiem tra theo a
    /*if (a==0) {
        if (b==0) {
            printf("Phương trình VSN");
        }
        else {
            printf("Phương trình vô nghiệm");
        }
    } else {
        printf("x= %.2f", -(float)b/(float)a);
    }*/
} 
