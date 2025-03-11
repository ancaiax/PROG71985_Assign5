#pragma once
#define MAXSTRING 30 //To prevent overflow
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//madisont - prog71985 - assign5, q1 - input interface

#ifndef INPUT_LIBRARY_H
#define INPUT_LIBRARY_H

char* getStringInput(char* input);

#endif //INPUT_LIBRARY_H