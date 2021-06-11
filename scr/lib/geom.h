#pragma once

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct circle {
    float x;
    float y;
    float R;
}
void check(char* str, struct circle* c);
float Squ(struct circle* c);
float Perim(struct circle* c);
