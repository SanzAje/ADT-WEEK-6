#include <stdio.h>
#include "stack.h"

// Inisialisasi Stack
void init(Stack *s) {
    s->top = -1;
}

// Mengecek apakah stack kosong
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Mengecek apakah stack penuh
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Menambahkan elemen ke stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Penuh!\n");
        return;
    }
    s->array[++s->top] = value;
}

// Menghapus elemen dari stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Kosong!\n");
        return -1;
    }
    return s->array[s->top--];
}
