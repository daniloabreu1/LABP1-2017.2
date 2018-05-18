#include <stdio.h>
void soma(int *pa, int *pb){
   *pa+=*pb;
}
main(){
    int a, b;
    printf("DIGITE VALORES PARA A E B >> ");
    scanf("%d %d",&a,&b);
    printf("\nANTES DA SOMA\n");
    printf("VALOR DE A >> %d\n",a);
    printf("VALOR DE B >> %d\n",b);
    printf("\nDEPOIS DA SOMA\n");
    soma(&a,&b);
    printf("VALOR DE A >> %d\n",a);
    printf("VALOR DE B >> %d\n",b);
}
