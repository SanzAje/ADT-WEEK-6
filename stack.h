#ifndef STACK_H
#define STACK_H

#define MAX 100  // Ukuran maksimum stack

// Struktur Stack
typedef struct {
    int top;
    int array[MAX];
} Stack;

// Deklarasi fungsi Stack
void init(Stack *s);
int isEmpty(Stack *s);
int isFull(Stack *s);
void push(Stack *s, int value);
int pop(Stack *s);

#endif
