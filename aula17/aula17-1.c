#include <stdio.h>
main(){
    float f, *pf;
    char c, *pc;
    int i, *pi;
    f=5.8;
    c='r';
    i=9;
    pf=&f;
    pc=&c;
    pi=&i;
    printf("VALORES ANTES\n");
    printf("INTEIRO %d\n",*pi);
    printf("FLOAT %.1f\n",*pf);
    printf("CHAR %c\n",*pc);
    *pi=300;
    *pc='A';
    *pf=99.9;
    printf("VALORES DEPOIS\n");
    printf("INTEIRO %d\n",*pi);
    printf("FLOAT %.1f\n",*pf);
    printf("CHAR %c\n",*pc);
}
