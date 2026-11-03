#include <stdio.h>
int main () {
    float daromad,xarajat,tejash,yil;
    printf("oylik daromadni kiriting:");
    scanf("%f", &daromad);
    printf("oylik xarajatni kiriting:");
    scanf("%f", &xarajat);
    tejash=daromad-xarajat;
    yil=tejash*12;
    printf("bir oyda tejaydigan pul: %.2f\n", tejash);
    printf("12 oyda tejaydigan pul: %.2f\n", yil);
    return 0;
}