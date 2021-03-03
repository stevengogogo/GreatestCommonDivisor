#ifndef BIGINT_H
#define BIGINT_H

#define MAX_DEC 256 

typedef struct 
{
    int number[MAX_DEC];
    int length;
} bigint;

bigint init_bigint(int number[], int length);
bigint init_bigint_zero(void);

bigint newnumc(char*);

bigint newnumint(int*, int );

bigint newnumint_eff(int,int);

/* 1 same; 0 different */
int compare_bigint(bigint, bigint);

bigint add(bigint, bigint);
/*Divide bigint with a positive one-digit integer [1,9] */
bigint divide_bigint_onedigit(bigint, int);
bigint swap_bigint(bigint);
bigint max_bigint(bigint, bigint);
bigint min_bigint(bigint, bigint);

//Display
void print(bigint);

char* create_string(bigint);

int str2int(char);


#endif