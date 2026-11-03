#include <stdio.h>
int main() {
    float a, v, s;
    printf("kub tomonini kiriting:");
    scanf("%f", &a);
    v=a*a*a;
    s=6*a*a;
    printf("kub hajmi: %.2f\n", v);
    printf("tola sirt yuzasi: %.2f\n", s);
    return 0;
} 