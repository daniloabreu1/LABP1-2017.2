#include <stdio.h>
//questao 01 e 02
int dobro(int numero){
    return numero*2;
}
int parImpar(int numero){
    int i=0;
    if((numero%2)==0){
        i= 1;
    }
    return i;
}
main(){
    int n;
    printf("DIGITE UM NUMERO ");
    scanf("%d",&n);
    printf("O DOBRO DE %d = %d\n",n,dobro(n));
    printf("O NUMERO %d RETORNA %d\n",n,parImpar(n));
}
