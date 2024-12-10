#include <stdio.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 18, b = 12;
    printf("UCLN cua %d va %d la: %d\n", a, b, ucln(a, b));
    return 0;
}