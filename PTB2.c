// Giải PT bậc 2: ax^2 + bx + c = 0
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main ()
{
    float a, b, c, Delta, x1, x2;
    printf ("Nhập a, b và c: \n");
    scanf("%f%f%f", &a, &b, &c);
    // Tinh Delta
    Delta = b * b - 4 * a * c;
    printf("Delta = %.2f \n", Delta);
    // Dua vao Delta chia truong hop
    if(Delta < 0) {
        printf("Phương trình Vô Nghiệm");
    } else if(Delta == 0) {
        x1 = (-b / (2 *a));
        printf("Phương trình có một nghiệm duy nhất là x1 = x2 = %f", x1);
    } else {
        x1 = (float)((- b + sqrt(Delta)) / (float)(2 * a));
        x2 = (float)((- b - sqrt(Delta)) /(float)(2 * a));
        printf("Phương trình có hai nghiệm là x1 = %.2f và x2 = %.2f", x1, x2);
        }
}