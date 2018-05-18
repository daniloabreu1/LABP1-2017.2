#include <stdio.h>
main(){
    int i, x;
    i=9;
    x=25;
    printf("ENDERECO DE i %p\n",&i);
    printf("ENDERECO DE x %p\n",&x);
    if(&i>&x){
        printf("ENDERECO DE i %p\n",&i);
    }else{
        printf("ENDERECO DE x %p\n",&x);
    }
}
