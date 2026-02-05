/******************************************************************************
 * Họ và tên: [Nguyên Thanh Long]
 * MSSV:      [PS49311]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


#include <stdio.h>

int main() {
    int n;
    int arr[10];
    int tong = 0, dem = 0;
    float trungBinh;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            tong += arr[i];
            dem++;
        }
    }

    if (dem == 0) {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    } else {
        trungBinh = (float)tong / dem;
        printf("Trung binh cong cac so chia het cho 3: %.2f\n", trungBinh);
    }
 
    return 0;
}


