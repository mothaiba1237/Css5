#include <stdio.h>

int main() {
    int sochotruoc = 33;
    int n;

    do {
        printf("nhap mot so: ");
        scanf("%d", &n);
        if (n != sochotruoc) {
            printf("so nhap khong trung voi so cho truoc hay nhap lai\n");
        }
    } while (n != sochotruoc);

    printf("so nhap trung voi so cho truoc");

    return 0;
}

