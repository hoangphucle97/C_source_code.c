// Viết hàm đổi một ký tự hoa sang ký tự thường.
#include <stdio.h>
#include <string.h>

void main()
{
    char string[255];
   printf("Nhập dữ liệu bạn muốn in hoa:");
   scanf("%s", &string);
   strupr(string);
   printf("Vậy chữ in hoa của bạn là %s", string);
}
