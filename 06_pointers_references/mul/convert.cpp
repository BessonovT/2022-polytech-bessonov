#include "lib.h"

int convert(const char* a)
{
    int res = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        for (int k = 0; k < 10; k++)
        {
            if (a[i] == arr[k])
            {
                res = res * 10;
                res = res + k;
            }
        }
    }
    return res;
}