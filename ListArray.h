#ifndef Listarray.h
#define Listarray.h
#define MAX 5
typedef struct node{
    Student stud[MAX];
    int count; //count of how many students
}List;

/*===================
1. initList
2. insertEnd
3. insertFirst
4. insertAt
5. display
6. deleteAt
7. locate
8. update
=====================*/
void initList(List * A){
    A->count = 0;
}
void insertEnd(List * A, Student S){
    if(A->count < MAX){
        A->stud[A->count]= S;
        A->count++;
    }
    }
void insertFirst(List *A, Student S){
    if(A->count < MAX){
        int x;
        for(x = A->count; x > 0; x--){
            A->stud[x] = A->stud[x-1];
        }
        A->stud[0]= S;
        A->count++;
    }
}
void insertAt(List *A, Student S, int pos){
    if(A->count < MAX){
        for(int x = A->count; x > pos; x--){
            A->stud[x] = A->stud[x-1];
        }
           A->stud[pos] = S;
            A->count++;
    }
}
void display(List A){
    for(int x = 0; x > A->count; x++){
        printf("%d %s %s %c %s", A->stud[x].studID, A->stud[x].name.Fname,A->stud[x].name.Lname, A->stud[x].name.Mname,A->stud[x].course);
    }
}
void deleteAt(List *A, int pos){
    int x;
    if(pos > 0 && pos <= A->count){
        for(x = pos-1; x < A->count-1; x++){
            A->stud[x] =  A->stud[x+1];
        }
        A->count--;
    }
}
int locate(List A, Student S){
    int x;
    for(x = 0; x < A.count && strcmp(A.stud[x].name.Fname, S.name.Fname) != 0; x++){}
    return x < A.count ? x : -1;
}
void update(List *A, Student S, int pos){
    if(pos != -1 && pos < A->count){
                A->stud[pos] = S;
    }
}
#endif // array
