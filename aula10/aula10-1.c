//primeira questao
#include <stdio.h>
#define DIM 5
void preencher(int m[DIM]){
    int i;
    for(i=0;i<DIM;i++){
        printf("DIGITE UM NUMERO INTEIRO ");
        scanf("%d",&m[i]);
    }
    printf("\n");
}
int produto (int m1[DIM], int m2[DIM]){
    int i,prod =0;
    for(i=0;i<DIM;i++){
        prod+=m1[i]*m2[i];
    }
    return prod;
}
main(){
    int a[DIM],b[DIM];
    preencher(a);
    preencher(b);
    printf("PRODUTO ESCALAR %d\n",produto(a,b));
}

