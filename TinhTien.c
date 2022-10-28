// Nhập tên sản phẩm, số lượng và đơn giá. Tính  tiền và thuế giá trị gia tăng phải trả, biết:
// a. tiền = số lượng * đơn giá
// b. thuế giá trị gia tăng = 10% tiền
#include <stdio.h>
#include <conio.h>

void main()
{
    int Soluong, Dongia, Tien;
    float VAT, TongTienPhaiTra;
    printf("Nhập Số lượng và Đơn giá: \n");
    scanf("%d%d", &Soluong, & Dongia);
    Tien = Soluong * Dongia;
    printf("Tiền hàng của bạn là: %d \n", Tien);
    VAT = 0.1 * Tien;
    printf("VAT của bạn là: %.2f \n", VAT);
    TongTienPhaiTra = Tien + VAT;
    printf("Tổng tiền phải trả của bạn là: %.2f \n", TongTienPhaiTra);
}