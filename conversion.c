#include <stdio.h>
#include "stack.h"

// Fungsi untuk mengonversi desimal ke biner menggunakan stack
void decimalToBinary(int decimal) {
    Stack s;
    init(&s);

    if (decimal == 0) {
        printf("Biner: 0\n");
        return;
    }

    while (decimal > 0) {
        push(&s, decimal % 2);
        decimal /= 2;
    }

    printf("Biner: ");
    while (!isEmpty(&s)) {
        printf("%d", pop(&s));
    }
    printf("\n");
}
