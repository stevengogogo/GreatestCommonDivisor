#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/bigint.h"

#define MAX_DEC 256

int main()
{
    char n[]="34343";
    bigint a = newnumc(n);
    
    char* i = create_string(a);
    printf("%d", strcmp(i, n));

    return 0;
}