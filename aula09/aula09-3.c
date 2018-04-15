#include <stdio.h>
//questao 07
float max(float x, float y, float z){
    float aux;
    if(x>y){
        if(x>z){
            aux= x;
        }else{
            aux= z;
        }
    }else{
        if(y>z){
            aux= y;
        }else{
            aux= z;
        }
    }
    return aux;
}
main(){
    float n1, n2, n3;
    printf("DIGITE TRES NUMEROS REAIS ");
    scanf("%f %f %f",&n1,&n2,&n3);
    printf("O MAIOR NUEMRO DIGITADO %.2f",max(n1,n2,n3));
}
