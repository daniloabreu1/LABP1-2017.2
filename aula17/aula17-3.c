#include <stdio.h>
main(){
    int i, x;
    printf("DIGITE VALORES PARA i E x >> ");
    scanf("%d %d",&i,&x);
    printf("ENDERECO DE i %p\n",&i);
    printf("ENDERECO DE x %p\n",&x);
    if(&i>&x){
        printf("ENDERECO DE i %p\n",&i);
    }else{
        printf("ENDERECO DE x %p\n",&x);
    }
}
