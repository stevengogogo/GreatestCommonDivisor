#ifndef UTILS_H
#define UTILS_H

typedef struct {
    int extreme;
    int arg;
} extm;

extm max(int*,int*);
extm min(int*,int*);

int striden(char*,char*);

FILE* readfile(char filename[]);

#endif