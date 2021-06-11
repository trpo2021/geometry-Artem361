#pragma once

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAZSIZE 40
struct circle {
    float x;
    float y;
    float R;
};
void check(char* str, struct circle* c);
float Squa(struct circle* c);
float Perim(struct circle* c);
