#include <stdio.h>

int main() {
    float toan, van, anh, total, average;
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem van: ");
    scanf("%f", &van);
    printf("Nhap diem anh: ");
    scanf("%f", &anh);
    total = toan + van + anh;
    average = total / 3;
    printf("Tong diem: %.2f\n", total);
    printf("Diem trung binh: %.2f\n", average);
    return 0;
}
