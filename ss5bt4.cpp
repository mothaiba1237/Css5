#include <stdio.h>

int main() {
    int n;

    printf("nhap mot so nguyen duong tu mot den muoi: ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("so nhap vao khong hop le\n");
        return 1;
    }
    printf("bang cuu chuong cua %d la:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

