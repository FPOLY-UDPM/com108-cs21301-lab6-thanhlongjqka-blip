/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Long]
 * MSSV:      [PS49311]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 



#include <stdio.h>

int main() {
    int n, m;
    int arr[10][10];

    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Ma tran sau khi tinh binh phuong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j] * arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}