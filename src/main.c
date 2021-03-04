#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/bigint.h"

#define MAX_DEC 256

int main()
{
    bigint a = newnumc("2343242423423424");
    bigint b = newnumc("234324244");
    bigint ans = newnumc("549078509377421720691456");
    bigint ans_p = multiplication_bigint(a,b);
    compare_bigint(ans,ans_p)==1;


    return 0;
}