#include <stdio.h>

typedef struct{
    char nome[50],curso[20],mat[14];
}ALUNO;
void preencher(ALUNO *a){
    fflush(stdin);
    printf("DIGITE O NOME DO ALUNO ");
    gets(a->nome);
    fflush(stdin);
    printf("DIGITE O CURSO ");
    gets(a->curso);
    fflush(stdin);
    printf("DIGITE A MATRICULA ");
    gets(a->mat);
    putchar('\n');

}
void imprimir (ALUNO *a,int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nDADOS PESSOAIS:\n");
        printf("NOME: ");
        puts(a[i].nome);
        printf("CURSO: ");
        puts(a[i].curso);
        printf("MATRICULA: ");
        puts(a[i].mat);
        putchar('\n');
    }

}
main(){
    ALUNO a[5];
    int i;
    for(i=0;i<5;i++){
        preencher(&a[i]);
    }

    imprimir(a,5);
}
