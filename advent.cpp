#include <stdio.h>

int main() {
    int erg = 50;       
    int zeroCounter = 0;
    char a;
    int b;

    printf("Startwert: %d\n", erg);
    printf("Gib R/L gefolgt von Zahl ein (jeweils in einer neuen Zeile). Ende mit Q.\n");

    while (1) {

        if (scanf(" %c", &a) != 1) break;


        if (a == 'Q' || a == 'q') break;


        if (scanf("%d", &b) != 1) {
            printf("Ungültige Zahl! Bitte erneut eingeben.\n");

            while (getchar() != '\n');
            continue;
        }


        if (a == 'R' || a == 'r') erg += b;
        else if (a == 'L' || a == 'l') erg -= b;
        else {
            printf("Ungültiger Buchstabe! Nur R oder L.\n");
            continue;
        }


        erg = (erg % 100 + 100) % 100;


        if (erg == 0) {
            zeroCounter++;
            printf("Ergebnis ist 0! Zero-Counter: %d\n", zeroCounter);
        }

        printf("Aktuelles Ergebnis: %d\n", erg);
    }

    printf("Endergebnis: %d\n", erg);
    printf("Zero-Counter insgesamt: %d\n", zeroCounter);

    return 0;
}