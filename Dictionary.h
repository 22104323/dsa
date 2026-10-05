#ifndef DICTIONARY_H_INCLUDED
#define DICTIONARY_H_INCLUDED


#include "hashing.h"
#include <stdio.h>
#include <stdlib.h>
#define  MAX 10

//Dictionary ADT
typedef struct node{
    int elem;
    struct node * link;
}Node, *List;

typedef List Dictionary[MAX];


void insert(Dictionary A, int elem){
        List * trav, temp;
        int x = hash(elem);
        trav = x[elem];
        for(; (*trav) != NULL && (*trav)->elem < elem; &(*trav)->link){}

        temp = (List)malloc(sizeof(StructNode));

        if(temp != NULL){
            temp->elem = elem;
            temp->link = *trav;
            *trav = temp;
        }

}
int insertsortedunique(Dictionary A, int elem){
    List *trav, temp;
        int x = hash(elem);
        trav = Dictionary[elem]
        for(; *trav != NULL && (*trav)->elem < elem;&(trav)->link ){}
        if(*trav == NULL || (*trav)->elem != elem){
            temp = (List)malloc(sizeof(Node));
        }
}


#endif // DICTIONARY_H_INCLUDED
