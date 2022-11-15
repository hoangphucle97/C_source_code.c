// Khai báo và gán giá trị mặc định cho mảng a[5][7].
#include <stdio.h>
void main(){
    int a[5][7] = {
        {5,3,6,5,9,3,7},
        {1,3,6,8,0,9,3},
        {7,3,9,2,8,2,3},
        {7,6,3,2,3,9,2},
        {8,6,3,9,3,2,5}
    };
    printf("Gia tri cua mang tai hang 0 cot 3 la: %d",a[0][1]);
    printf("\nGia tri cua mang tai hang 5 cot 6 la: %d",a[4][3]);
    printf("\nGia tri cua mang tai hang 5 cot 6 la: %d",a[3][3]);
    printf("\nGia tri cua mang tai hang 5 cot 6 la: %d",a[4][6]);
    printf("\nGia tri cua mang tai hang 5 cot 6 la: %d",a[2][2]);
}