//terceira questao
#include <stdio.h>
#define DIM 3
void preencher(int m[DIM][DIM]){
    int i;
    for(i=0;i<DIM;i++){
        scanf("%d %d %d",&m[i][0],&m[i][1],&m[i][2]);
    }
    printf("\n");
}
void imprimir(int m[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        printf("%d ",m[i]);
    }
    printf("\n");
}
void somarColunas(int m[DIM][DIM],int n[DIM]){
    int i,j;
    for(i=0;i<DIM;i++){
        n[i]=0;
        for(j=0;j<DIM;j++){
            n[i]+=m[j][i];
        }
    }
}
main(){
    int a[DIM][DIM],b[DIM];
    preencher(a);
    somarColunas(a,b);
    imprimir(b);
}





