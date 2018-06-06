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
void imprimirPares(int *p, int t){
    int i;
    putchar('\n');
    for(i=0;i<t;i++){
        if(*(p+i)%2==0){
            printf("VALOR %d ",*(p+i));
            printf("%p\n",p+i);
        }

    }
    putchar('\n');
}
void imprimirEnd(int *p, int t){
    int i;
    putchar('\n');
    for(i=0;i<t;i++){
        printf("VALOR %d ",*(p+i));
        printf("%p\n",p+i);
    }
    putchar('\n');
}
main(){
    int m[5];
    preencher(m,5);
    imprimir(m,5);
    imprimirEnd(m,5);
    imprimirPares(m,5);

}
