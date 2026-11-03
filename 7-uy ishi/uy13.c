#include <stdio.h> 
#include <math.h>
int main() {
double a, b, kvadrat, kub, summa;
printf("Birinchi sonni kiriting: ");
scanf("%lf", &a);

printf("Ikkinchi sonni kiriting: ");
scanf("%lf", &b);

kvadrat = pow(a, 2);
kub = pow(b, 3);

summa = kvadrat + kub;

printf("Yigindi: %.2lf\n", summa);

return 0;
}