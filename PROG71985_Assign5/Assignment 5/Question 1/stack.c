#include "stack.h"

//madisont - prog71985 - assign5, q1 - stack implementation

STACK* createStack(int capacity) {
	//Capacity check
	if (capacity <= 0) return NULL;

	STACK* stack = (STACK*)malloc(sizeof(STACK));
	//Memory allocation check
	if (stack == NULL) return NULL;

	stack->collection = malloc(sizeof(char) * capacity);
	//Memory allocation check
	if (stack->collection == NULL)
	{
		free(stack);
		return NULL;
	}

	//Set capacity and size values
	stack->capacity = capacity;
	stack->size = 0;

	return stack;
}

void destroyStack(STACK* stack) {
	//Free dynamically allocated memory for the string
	free(stack->collection);
	//Free dynamically allocated memory for the stack
	free(stack);
}

bool isFull(STACK* stack) {
	//Return true if stack size has reached capacity
	return stack->capacity == stack->size;
}

bool isEmpty(STACK* stack) {
	//If stack size is 0, stack is empty
	return stack->size == 0;
}

bool pushChar(STACK* stack, char* stringChar) {
	if (isFull(stack)) return false;

	stack->collection[stack->size] = *stringChar;
	stack->size++;

	return true;
}

bool popChar(STACK* stack, char* string) {
	if (isEmpty(stack))
		return false;
	
	stack->size--;
	*string = stack->collection[stack->size];
	
	return true;
}