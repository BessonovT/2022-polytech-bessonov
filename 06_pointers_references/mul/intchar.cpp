#include "lib.h"

const char* intstr(int a)
{
    int b = a;
    int arrn[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int c = 1;
    while ((b / 10) != 0)
    {
        b = b / 10;
        c++;
    }
    char* result = new char[c + 2];
    b = a;
    for (int i = c - 1; i > -1; i--)
    {
        for (int k = 0; k < 10; k++)
        {
            if ((a % 10) == arrn[k])
            {
                result[i] = arr[k];
                break;
            }
        }
        a = a / 10;
        result[c] = '\0';
    }
    return result;
}