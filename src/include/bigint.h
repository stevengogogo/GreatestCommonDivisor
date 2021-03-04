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
/*Copy an bigint [2] to destination [1].*/
void copy_bigint(bigint*, bigint*);
bigint newnumc(char*);

bigint newnumint(int*, int );

bigint newnumint_eff(int,int);

/* 1 same; 0 different */
int compare_bigint(bigint, bigint);

bigint add(bigint, bigint);
/*Substraction [1] - [2]. Assume minu > subtra*/
bigint substraction_bigint(bigint minu, bigint subtra);
/*Divide bigint with a positive one-digit integer [1,9].*/
bigint divide_bigint_onedigit(bigint, int);
/*Change first and last variable*/
void swap_bigint(bigint*, bigint*);
/*If [1] is bigger or same return 0; otherwise, 1 */
int argmax_bigint(bigint, bigint);
bigint max_bigint(bigint, bigint);
bigint min_bigint(bigint, bigint);

//Display
void print(bigint);

char* create_string(bigint);

int str2int(char);


#endif