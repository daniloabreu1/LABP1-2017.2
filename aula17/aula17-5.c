#include <stdio.h>
void maior(int *px, int *py){
    int aux;
    if(*py>*px){
        aux=*px;
        *px=*py;
        *py=aux;
    }
}
main(){
    int y, x;
    printf("DIGITE VALORES PARA x E y >> ");
    scanf("%d %d",&x,&y);
    printf("\nANTES DA TROCA\n");
    printf("VALOR DE X >> %d\n",x);
    printf("VALOR DE Y >> %d\n",y);
    maior(&x,&y);
    printf("\nDEPOIS DA TROCA\n");
    printf("VALOR DE X >> %d\n",x);
    printf("VALOR DE Y >> %d\n",y);
}
