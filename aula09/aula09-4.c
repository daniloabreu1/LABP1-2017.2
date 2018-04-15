#include <stdio.h>
//questao 04
int bissexto(int ano){
    if((((ano%4)==0)&&(!((ano%100)==0)))||((ano%400)==0)){
        return 1;
    }
    return 0;
}
main(){
    int a;
    printf("DIGITE O ANO ");
    scanf("%d",&a);
    printf("%d",bissexto(a));
}
