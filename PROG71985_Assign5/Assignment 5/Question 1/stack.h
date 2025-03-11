#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//madisont - prog71985 - assign5, q1 - stack interface

#ifndef STACK_LIBRARY_H
#define STACK_LIBRARY_H

//Stack struct
typedef struct stack {
	char* collection;
	int capacity;
	int size;
}STACK;

//Stack functions
STACK* createStack(int capacity);
void destroyStack(STACK* stack);
bool isFull(STACK* stack);
bool isEmpty(STACK* stack);
bool pushChar(STACK* stack, char* string);
bool popChar(STACK* stack, char* string);

#endif //STACK_LIBRARY_H