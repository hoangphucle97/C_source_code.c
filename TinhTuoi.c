// Nhập năm sinh của một người và tính tuổi của người đó.
#include <stdio.h>
#include <conio.h>

void main()
{
    int Namsinh, Tuoicuaban;
    printf("Nhập năm sinh của bạn:\n");
    scanf("%d", &Namsinh);
    Tuoicuaban = 2022 - Namsinh;
    printf("Tuổi của bạn là: %d", Tuoicuaban);
}