#include <stdio.h>

int main() {
    int n, sum = 0;

    do {
        printf("nhap mot so nguyen duong: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("tong cac so tu 1 den %d là: %d\n", n, sum);

    return 0;
}
