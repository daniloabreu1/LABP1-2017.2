#include <stdio.h>
void imprimirPosica(float *f,int tam){
   int i;
   for(i=0;i<tam;i++){
    printf("ENDERECO %p\n",f+i);
    //printf("ENDERECO %p\n",&f[i]);
   }
}
main(){
    float v[10]={3.0};
    imprimirPosica(v,10);
}
