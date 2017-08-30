/*
 * itoa.c
 *
 *  Created on: Aug 30, 2017
 *      Author: Russty
 */


#include "itoa.h"

char Letters[72] = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz";


char* itoa(int value, char* result,  int base)
{
    if (base < 2 || base > 36)
    {
        *result = '\0';
        return result;
    }

    char* ptr = result, *ptr1 = result, tmp_chr;
    int tmp_value;

    do
    {
        tmp_value = value;
        value /= base;
        *ptr++ = Letters[35 + (tmp_value - value * base)];
    } while ( value );

    if (tmp_value < 0) *ptr++ = '-';
    while(ptr1 < ptr) {
        tmp_chr = *ptr;
        *ptr-- = *ptr1;
        *ptr1++ = tmp_chr;
    }
    return result;
}

