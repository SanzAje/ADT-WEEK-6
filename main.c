#include <stdio.h>
#include "stack.h"

// Deklarasi fungsi konversi
void decimalToBinary(int decimal);

int main() {
    int decimal;

    printf("Masukkan bilangan desimal: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}
