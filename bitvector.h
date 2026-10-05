#ifndef BITVECTOR_H_INCLUDED
#define BITVECTOR_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define WORDSIZE 32
#define BIT_WS 5
#define MASK 0x1f

int initbitv(int bitv[], int val){
    *bitv = calloc(val/WORDSIZE + 1, sizeof(int));
    return *bitv != NULL;
}

void set(int bitv[], int i){ //inserting
    bitv[i >> BIT_WS] |= (i<<(i&MASK));
                     // or when deleting &=~
}


#endif // BITVECTOR_H_INCLUDED
