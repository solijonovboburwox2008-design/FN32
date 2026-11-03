#include <stdio.h>
int main() {
    float narx, foiz, chegirma, yanginarx;
printf("mahsulot narxini kiriting:");
scanf("%f", &narx);
printf("chegirma foizini kiriting:");
scanf("%f", &foiz);
chegirma=narx*foiz/100;
yanginarx=narx-chegirma;
printf("chegirma summasi: %.2f\n", chegirma);
printf("yangi narx: %.2f\n", yanginarx);
return 0;
}