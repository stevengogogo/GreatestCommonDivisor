#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/bigint.h"

#define MAX_DEC 256

int main()
{
   bigint a = newnumc("23532");
    bigint b = newnumc("23332");
    bigint gcd_real = newnumc("8");
    bigint gcd = gcd_bigint(a,b);


    return 0;
}