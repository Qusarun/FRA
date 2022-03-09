#include "../include/fra.h"
#include <stdio.h>
#include <time.h>

#define CHANCE  0.9
#define SAMPLES 10000

int main(void) {
    srand(time(0));
    double d = 0;
    int a = 0;
    for (int i = 0; i < SAMPLES; i++) { if (roll(CHANCE, &d)) a++; }
    printf("%.0f%%\n", a / (float) SAMPLES * 100);
    return 0;
}
