#include <stdio.h>

int main() {
    int a;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &a);

    printf("Cac uoc cua %d la: ", n);
    for (int x = 1; x <= (a < 0 ? -a : a); x++) { 
        if (a % x == 0) {
            printf("%d ", x);
        }
    }

    printf("\n");
    return 0;
}
