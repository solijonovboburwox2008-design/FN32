#include <stdio.h>
int main () {
    float km, m, cm;
    printf("kilometr kiriting:");
    scanf("%f", &km);
    m=km*1000;
    cm=km*100000;
    printf("metr: %.2f\n", m);
    printf("santimetr: %.2f\n", cm);
    return 0;
}