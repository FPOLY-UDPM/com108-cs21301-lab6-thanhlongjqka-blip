/******************************************************************************
 * Họ và tên: [Nguyễn Thanh Long]
 * MSSV:      [PS49311]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    int n;
    int arr[10];
    int max, min;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Gia tri lon nhat trong mang la: %d\n", max);
    printf("Gia tri nho nhat trong mang la: %d\n", min);

    return 0;
}