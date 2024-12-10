#include <stdio.h>
typedef struct{
    int i;
    float f;
    char h;
    char j[10];
    double t;
}datatypes;

typedef struct{
    char h;
    int i;
    char e;
    char j[10];
    float f;
    double t;
}datatypes1;


void Data_Types()
{
    int a = 1;
    float b = 7.5;
    char c = 'D';
    char s[20] = "prathik";
    double d = 35000.2325628393;

    int *a1;
    float *b1;
    char *c1;
    void *v = a;
    datatypes dtype = {9 , 25.7658,'P','darshan', 2500000.678993};
    datatypes1 dtype1 = {'Q',8 ,'n','asdfghjkl', 22.7658, 6500000.678993};
    //prints structure size
    printf("  structure size:%d\n ",sizeof(dtype));

    printf("int : %d\n",sizeof(dtype.i));
    printf("float : %d\n",sizeof(dtype.f));
    printf("char : %d\n",sizeof(dtype.h));
    printf("char : %d\n",sizeof(dtype.j));
    printf("double : %d\n",sizeof(dtype.t));
    printf("------------------------------------\n");



    printf("  structure size:%d\n ",sizeof(dtype1));
    printf("char : %d\n",sizeof(dtype1.h));
    printf("int : %d\n",sizeof(dtype1.i));
    printf("char : %d\n",sizeof(dtype1.e));
    printf("char : %d\n",sizeof(dtype1.j));
    printf("float : %d\n",sizeof(dtype1.f));
    printf("double : %d\n",sizeof(dtype1.t));
    printf("------------------------------------\n");




    printf("int : %d\n",sizeof(a));
    printf("float : %d\n",sizeof(b));
    printf("char : %d\n",sizeof(c));
    printf("char : %d\n",sizeof(s));
    printf("double : %d\n",sizeof(d));
    printf("------------------------------------\n");




    printf("int : %d\n",sizeof(a1));
    printf("float : %d\n",sizeof(b1));
    printf("char : %d\n",sizeof(c1));
    printf("void:%d\n",sizeof(v));
    //printf("char : %d\n",sizeof(s));
    //printf("double : %d\n",sizeof(d));
    printf("------------------------------------\n");




    printf("int : %d\n",sizeof(1));
    printf("float : %d\n",sizeof(7.5));
    printf("char : %d\n",sizeof('D'));
    printf("char : %d\n",sizeof('prathik'));
    printf("double : %d\n",sizeof(35000.2325628393));

}
