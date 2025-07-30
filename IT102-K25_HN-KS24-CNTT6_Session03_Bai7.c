#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &n);

    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n;

    printf("Tong cac chu so la: %d\n", sum);

    return 0;
}
