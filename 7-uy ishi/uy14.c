#include <stdio.h>
int main() {
int soat1, minut1, soat2, minut2; 
int boshlanish, tugash, farq;
printf("Boshlanish soati: ");
scanf("%d", &soat1);

printf("Boshlanish minuti: ");
scanf("%d", &minut1);

printf("Tugash soati: ");
scanf("%d", &soat2);

printf("Tugash minuti: ");
scanf("%d", &minut2);

boshlanish = soat1 * 60 + minut1;
tugash = soat2 * 60 + minut2;

farq = tugash - boshlanish;

printf("Vaqt farqi: %d minut\n", farq);

return 0;
}