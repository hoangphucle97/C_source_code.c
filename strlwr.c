// Viết hàm đổi một ký tự thường sang ký tự hoa.
#include <stdio.h>
#include <string.h>

void main()
{
    char string[255];
    printf("nhập dữ liệu bạn muốn viết thường:");
    scanf("%s", &string);
    strlwr(string);
    printf("Kết quả của bạn là: %s",string);
}