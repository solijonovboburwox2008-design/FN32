#include <stdio.h>
 int main() {
    float km, litr, sarf;
    printf("masofani kiriting (km):");
    scanf("%f", &km);
    printf("yoqilgi miqdorini kiriting (litr):");
    scanf("%f", &litr);
    sarf=litr*100/km;
    printf("100 km uchun yoqilgi sarfi: %.2f litr\n", sarf);
    return 0;
}