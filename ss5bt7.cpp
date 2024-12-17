#include <stdio.h>

int main() {
    int a, b;
    
    printf("nhap vao so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("nhap vao so nguyen duong thu hai: ");
    scanf("%d", &b);
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    printf("uoc chung lon nhat la: %d\n", a);
    return 0;
}

