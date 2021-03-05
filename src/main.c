#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/bigint.h"

#define MAX_DEC 256

int main()
{
    bigint a = newnumc("2343242423423424");
    //bigint b = newnumc("9990");
    //bigint ans = newnumc("23408991810000005760");
    bigint b = newnumc("234324244");
    bigint ans = newnumc("549078509377421720691456");

    /*
            2343242423423424
                   234324244
    549078509377421720691456
    539078409377421720691456
    */

    bigint ans_p = multiplication_bigint(a,b);


    return 0;
}