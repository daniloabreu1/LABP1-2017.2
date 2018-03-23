#include <stdio.h>
main(){
    int i,c, soma;
    soma=0;
    i=0;
    c=0;
    while(1){
        if(c<50){
            if(i%2==0){
                soma+=i;
                c++;
            }
        }else{
            break;
        }
        i++;
    }
    printf("A soma dos 50 numeros pares = %d",soma);

}
