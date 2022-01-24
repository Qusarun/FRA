#ifndef FRA_H
#define FRA_H

#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    double d;
} FRA;

bool roll(double chance, FRA* fra);

#endif
