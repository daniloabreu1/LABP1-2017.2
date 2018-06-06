#include <stdio.h>
typedef struct{
    char rua[50], num[10],comp[20], bairro[30], cidade[30],estado[30];
}ENDER;

typedef struct{
    char nome[50];
    int idade;
    ENDER e;
}PESSOA;
void preencher(PESSOA *p){
    fflush(stdin);
    printf("DIGITE O NOME DA PESSOA ");
    gets(p->nome);
    printf("DIGITE A IDADE DA PESSOA ");
    scanf("%d",&p->idade);
    fflush(stdin);
    printf("DIGITE O NOME DA RUA ");
    gets(p->e.rua);
    fflush(stdin);
    printf("aDIGITE O NUMERO DO ENDERECO ");
    gets(p->e.num);
    fflush(stdin);
    printf("DIGITE O COMPLEMENTO - SE NAO TIVER, DIGITE SEM ");
    gets(p->e.comp);
    fflush(stdin);
    printf("DIGITE O BAIRRO ");
    gets(p->e.bairro);
    fflush(stdin);
    printf("DIGITE O CIDADE ");
    gets(p->e.cidade);
    fflush(stdin);
    printf("DIGITE O ESTADO ");
    gets(p->e.estado);
}
void imprimir (PESSOA p){
    printf("\nDADOS PESSOAIS:\n");
    printf("NOME: ");
    puts(p.nome);
    printf("IDADE: %d\n",p.idade);
    printf("RUA: ");
    puts(p.e.rua);
    printf("NUMERO: ");
    puts(p.e.num);
    printf("COMPLEMENTO: ");
    puts(p.e.comp);
    printf("BAIRRO: ");
    puts(p.e.bairro);
    printf("CIDADE: ");
    puts(p.e.cidade);
    printf("ESTADO: ");
    puts(p.e.estado);
    putchar('\n');
}
main(){
    PESSOA p;
    preencher(&p);
    imprimir(p);
}
