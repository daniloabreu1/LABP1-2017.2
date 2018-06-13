#include <stdio.h>
#include <stdlib.h>
void imprimir (int *p, int t){
    int i;
     for(i=0;i<t;i++){
        printf("%d\n",p[i]);
    }
}
void preencher (int *p, int t){
    int i;
     for(i=0;i<t;i++){
        printf("Digite um inteiro ");
        scanf("%d",&p[i]);
    }
}

main(){
    int t;
    printf("digite a quantidade de espacos ");
    scanf("%d",&t);
    int *p = (int*)calloc(t,sizeof(int));
    imprimir(p,t);
    preencher(p,t);
    imprimir(p,t);
    printf("digite um novo valor ");
    scanf("%d",&t);

    int *aux = (int*)realloc(p,t*sizeof(int));
    if(aux!=NULL){
        p=aux;
    }else{
        printf("nao REalocou\n");
    }

    imprimir(p,t);
    preencher(p,t);
    imprimir(p,t);
    free(p);
}
