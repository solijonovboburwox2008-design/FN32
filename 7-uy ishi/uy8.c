#include <stdio.h>
int main() {
    int kun, yil, hafta, qoldiq;
    printf("kunlarni kiriting:");
    scanf("%d", &kun);
    yil=kun/365;
    qoldiq=kun%365;
    hafta=qoldiq/7;
    qoldiq=qoldiq%7;
    printf("yil: %d\n", yil);
    printf("hafta: %d\n", hafta);
    printf("Qolgan kun: %d\n", qoldiq);
    return 0;
}