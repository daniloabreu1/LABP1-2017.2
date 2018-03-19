#include <stdio.h>
main(){
    char sexo;
    printf("DIGITE M OU F: ");
    sexo = getchar();
    //scanf("%c",&sexo);
    sexo=='m'||sexo=='M'?printf("\nMASCULINO"):sexo=='f'||sexo=='F'?printf("\nFEMININO"):printf("\nINVALIDO");
}
