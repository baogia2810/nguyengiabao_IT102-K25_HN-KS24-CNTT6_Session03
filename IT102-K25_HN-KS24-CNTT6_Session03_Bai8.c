#include <stdio.h>

int main() {
    int n, rev = 0;

    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &n);

    rev += (n % 10) * 1000;
    n /= 10;
    rev += (n % 10) * 100;
    n /= 10;
    rev += (n % 10) * 10;
    n /= 10;
    rev += n;

    printf("So nghich dao la: %d\n", rev);

    return 0;
}
