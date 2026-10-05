#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#define MAX 10

#include <stdio.h>
#include <stdlib.h>
#include <std
typedef struct node{
    Student stud;
    struct node * link;
}*List;
/*===================
1. initializeList
2. displayList
5. insertLast
6. deleteLast
7. deleteElem
8. deleteAll
=====================*/

void initList(List *A){
    *A = NULL;
}

void displayList(List A){
    List temp = A;
    while(temp != NULL){
        temp = temp->link;
    }
}

void insertFirst(List *A, Student stud){
    List temp = (List)malloc(sizeof(struct node));
    if(temp != NULL){
        temp->stud = stud;
        temp->link = *A;
        *A = temp;
    }


}




#endif // LINKEDLIST_H_INCLUDED
