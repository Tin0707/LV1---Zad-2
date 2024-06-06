#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int binNiz[8];
    int decimal = 0;
    
    printf("Unesite 8 brojeva (0 ili 1): \n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &binNiz[i]);

        if (binNiz[i] != 0 && binNiz[i] != 1) {
            printf("Neispravan unos! Molimo unesite samo 0 ili 1.\n");
            return 1;
        }
    }

    
    for (int i = 0; i < 8; i++) {
        decimal = decimal * 2 + binNiz[i];
    }


    if (binNiz[0] == 1) {
        decimal -= 256;
    }

    printf("Dekadski zapis: %d\n", decimal);

    return 0;
}
