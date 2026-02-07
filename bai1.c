/******************************************************************************
 * Họ và tên: [Nguyên Thanh Long]
 * MSSV:      [PS49311]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void randomArray(int arr[], int size, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

// HÀM IN MẢNG
void printArray(int arr[], int size) {
    printf("Các phần tử của mảng là:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
float tinhTrungbinh(int arr[], int size){
    int sum = 0;
    int count = 0;
}

int flindmaxArray(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int flindminArray(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int n;
    
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);
    
    int arr[10];

    randomArray(arr, n, 1, 1000);
    printArray(arr, n);
int max = flindmaxArray(arr, n);
int min = flindminArray(arr, n);
printf("Giá trị lớn nhất trong mảng là: %d\n", max);
printf("Giá trị nhỏ nhất trong mảng là: %d\n", min);
    
    return 0;
}

