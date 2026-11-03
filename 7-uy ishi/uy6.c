#include <stdio.h>
int main() {
    int son, birinchi, ikkinchi, kopaytma;
    printf("ikki xonali son kiriting:");
    scanf("%d", &son);
    birinchi=son/10;
    ikkinchi=son%10;
    kopaytma=birinchi*ikkinchi;
    printf("raqamlar kopaytmasi: %d\n", kopaytma);
    return 0;
}