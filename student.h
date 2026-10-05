#ifndef student.h
#define student
#include <stdio.h>
#include <stdlib.h>


typedef struct name{
    char Fname[16];
    char Lname[16];
    char Mname;
}Nametype;

typedef struct student{
    int studID;
    Nametype name;
    char course[4];
}Student;




#endif // student
