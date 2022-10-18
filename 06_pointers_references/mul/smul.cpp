#include "lib.h"

int smul(const char* a, const char* b)
{
    int res = convert(a) * convert(b);
    return res;
}