#include <stdio.h>
#define DIM 3
void imprimirEnd(float *m,int linha,int col){
    int i,j;
    for(i=0;i<linha;i++){
        for(j=0;j<col;j++){
            printf("%p ",&m[i*col+j]);
        }
        putchar('\n');
    }
}
main(){
    float v[DIM][DIM]={{1.0,2.0,3.0},{4.0,5.0,6.0},{7.0,8.0,9.0}};
    imprimirEnd(v,DIM,DIM);
}
