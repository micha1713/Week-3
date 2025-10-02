#include <stdio.h>

int main() {
    int a;

    printf("Geef een integer in: ");
    scanf("%d", &a);

    while (1) {
        if (a > 100) {
            printf("Klaar! a = %d is groter dan 100.\n", a);
            break;
        }
        else {
            a = a * -2;
            printf("Nieuwe waarde van a: %d\n", a);
        }
    }

    return 0;
}