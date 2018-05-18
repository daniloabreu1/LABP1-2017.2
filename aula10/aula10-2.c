//segunda questao
#include <stdio.h>
#define DIM 10
void preencher(int m[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        printf("DIGITE UM NUMERO INTEIRO ");
        scanf("%d",&m[i]);
    }
    printf("\n");
}
void imprimir(int m[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        printf("%3d ",m[i]);
    }
    printf("\n");
}
void zerarVetor(int m[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        if(m[i]<0){
            m[i]=0;
        }
    }
}
main(){
    int a[DIM];
    preencher(a);
    imprimir(a);
    zerarVetor(a);
    imprimir(a);
}


