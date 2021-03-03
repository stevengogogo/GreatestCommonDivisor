#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/bigint.h"

#define MAX_DEC 256

int main()
{
    bigint divident1 = newnumc("3434341341412234234");
    int divisor=2;
    bigint quotient1;

    quotient1 = divide_bigint_onedigit(divident1, divisor);


    return 0;
}