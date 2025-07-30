#include <stdio.h>

#define PI 3.14159

int main() {
    float r, perimeter, area;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    perimeter = 2 * PI * r;
    area = PI * r * r;
    printf("Chu vi: %.2f\n", perimeter);
    printf("Dien tich: %.2f\n", area);
    return 0;
}