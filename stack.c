#include <stdio.h>
#include "stack.h"


void init(Stack *s) {
    s->top = -1;
}


int isEmpty(Stack *s) {
    return s->top == -1;
}


int isFull(Stack *s) {
    return s->top == MAX - 1;
}


void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack Penuh!\n");
        return;
    }
    s->array[++s->top] = value;
}


int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack Kosong!\n");
        return -1;
    }
    return s->array[s->top--];
}
