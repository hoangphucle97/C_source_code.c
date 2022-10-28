// Nhập điểm thi và hệ số 3 môn Toán, Lý, Hóa của một sinh viên. Tính điểm trung bình của sinh viên đó.
#include <stdio.h>
#include <conio.h>

void main()
{
    float T, L, H, DTB;
    // Do điểm T, L, H thuộc kiểu số thực.
    int HsT, HsL, HsH;
    printf("Nhập diểm Toán, Lý, Hoá:\n");
    scanf("%f%f%f", &T, &L,&H);
    printf("Nhập hệ số điểm của Toán, Lý, Hoá: \n");
    scanf("%d%d%d", &HsT, &HsL, &HsH);
    DTB = (T * HsT + L * HsL + H * HsH) / (HsT + HsL + HsH);
    printf("Điểm trung bình của bạn la`: %.2f", DTB);
}
