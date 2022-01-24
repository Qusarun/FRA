#include "../include/fra.h"

bool roll(double chance, FRA* fra) {
    bool a = rand() % 100000 > chance * 100000;
    fra->d += a? -chance : chance;
    bool b = fra->d > chance * 2 || (a && fra->d > chance * -2);
    fra->d += b? -chance : chance;
    return b;
}
