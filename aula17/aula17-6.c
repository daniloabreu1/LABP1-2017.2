#include <stdio.h>
int somaDobro(int *pa, int *pb){
   *pa*=2;
   *pb*=2;
   return *pa+*pb;
}
main(){
    int a, b;
    printf("DIGITE VALORES PARA x E y >> ");
    scanf("%d %d",&a,&b);
    printf("\nANTES DA SOMA\n");
    printf("VALOR DE A >> %d\n",a);
    printf("VALOR DE B >> %d\n",b);
    printf("\nDEPOIS DA SOMA\n");
    printf("SOMA DO DOBRO %d\n",somaDobro(&a,&b));
    printf("VALOR DE X >> %d\n",a);
    printf("VALOR DE Y >> %d\n",b);
}
