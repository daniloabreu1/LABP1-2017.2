//QUESTAO 01
#include <stdio.h>
#include <string.h>
void impressaoInvertida(char texto[21]){
    int t = strlen(texto);
    printf("FRASE INVERTIDA:\n");
    for(t=t-1;t>=0;t--){
        printf("%c",texto[t]);
    }
}
main(){
    char frase[21];
    printf("DIGITE UM TEXTO ");
    gets(frase);
    printf("FRASE ORIGINAL:\n%s\n",frase);
    impressaoInvertida(frase);
}
