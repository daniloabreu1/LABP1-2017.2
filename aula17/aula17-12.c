#include <stdio.h>
int ordenar(int *a, int *b,int *c){
    int aux;
    if(*a==0 && *b==0 && *c ==0){
        return 1;
    }else{
        if(*a>*b){
            if(*a>*c){
                if(*b>*c){
                    aux=*a;
                    *a=*c;
                    *c=aux;
                }else{
                    aux=*a;
                    *a=*b;
                    *b=*c;
                    *c=aux;
                }
            }else{
                aux=*a;
                *a=*b;
                *b=aux;
            }
        }else{
            if(*b>*c){
                if(*a>*c){
                    aux=*a;
                    *a=*c;
                    *c=*b;
                    *b=aux;
                }else{
                    aux=*b;
                    *b=*c;
                    *c=aux;
                }
            }
        }

    }
    return 0;
}

main(){
    int a,b,c;
    printf("DIGITE 3 VALORES INTEIROS ");
    scanf("%d %d %d",&a,&b,&c);
    if(ordenar(&a,&b,&c)){
        printf("TODOS OS VALORES SAO ZEROS");
    }else{
        printf("\n%d %d %d\n",a,b,c);
    }

}
