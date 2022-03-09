#include "../include/fra.h"

bool roll(double chance, double* d) {
    bool a = rand() % 100000 > chance * 100000;
    d[0] += a? -chance : chance;
    bool b = d[0] > chance * 2 || (a && d[0] > chance * -2);
    d[0] += b? -chance : chance;
    return b;
}
