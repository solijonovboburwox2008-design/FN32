#include <stdio.h>
int main() { int son;
printf("Son kiriting: ");
scanf("%d", &son);

son++;
son++;
son++;

son--;
son--;

printf("Natija: %d\n", son);

return 0;
}