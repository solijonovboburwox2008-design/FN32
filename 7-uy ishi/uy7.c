#include <stdio.h>
int main() {
    int son,a,b,c,teskari;
    printf("uch xonali son kiriting:");
    scanf("%d", &son);
    a=son/100;
    b=(son/10)%10;
    c=son%10;
    teskari=c*100+b*10+a;
    printf("teskari son: %d\n", teskari);
    return 0;
}