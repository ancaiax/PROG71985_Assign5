#define _CRT_SECURE_NO_WARNINGS
#define SCAN_FAIL 0
#include <stdio.h>
#include "stack.h"
#include "input.h"

//madisont - prog71985 - assign5, q1 - source code

int main(void) {
    char input[MAXSTRING];
    getStringInput(input);

    int capacity = strlen(input);
    STACK* stack = createStack(capacity);

    if (stack == NULL) {
        printf("Error creating stack.\n");
        return 1;
    }

    for (int i = 0; i < strlen(input); i++) {
        pushChar(stack, &input[i]);
    }

    while (!isEmpty(stack)) {
        char poppedChar;
        popChar(stack, &poppedChar);
        printf("%c", poppedChar);
    }
    printf("\n");
    destroyStack(stack);
    return 0;
}