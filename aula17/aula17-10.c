#include <stdio.h>
void preencher(int *p, int t){
    int i;
    for(i=0;i<t;i++){
        printf("DIGITE UM NUMERO ");
        scanf("%d",(p+i));
    }
}
void imprimir(int *p, int t){
    int i;
    putchar('\n');
    for(i=0;i<t;i++){
        printf("%d ",*(p+i));
    }
    putchar('\n');
}
void imprimirDobro(int *p, int t){
    int i;
    putchar('\n');
    for(i=0;i<t;i++){
        printf("%d ",(*(p+i))*2);
    }
    putchar('\n');
}
main(){
    int m[5];
    preencher(m,5);
    imprimir(m,5);
    imprimirDobro(m,5);

}
