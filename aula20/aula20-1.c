#include <stdio.h>
typedef struct{
    int hora, min, seg;
}HORARIO;

typedef struct{
    int dia, mes, ano;
}DATA;
typedef struct{
    HORARIO h;
    DATA d;
    char descricao[50];
}COMP;
void preencher(COMP *c){
    printf("DIGITE A HORA DO COMPROMISSO ");
    scanf("%d",&c->h.hora);
    printf("DIGITE O MINUTO DO COMPROMISSO ");
    scanf("%d",&c->h.min);
    printf("DIGITE O SEGUNDO DO COMPROMISSO ");
    scanf("%d",&c->h.seg);
    printf("\nDIGITE DIA DO COMPROMISSO ");
    scanf("%d",&c->d.dia);
    printf("DIGITE MES DO COMPROMISSO ");
    scanf("%d",&c->d.mes);
    printf("DIGITE ANO DO COMPROMISSO ");
    scanf("%d",&c->d.ano);
    fflush(stdin);
    printf("\nDIGITE A DESCRICAO DO COMPROMISSO ");
    gets(c->descricao);
}
void imprimir (COMP c){
    printf("\nCOMPROMISSO MARCADO PARA:\n");
    printf("DATA: %d/%d/%d\n",c.d.dia,c.d.mes, c.d.ano);
    printf("HORARIO: %d:%d:%d\n",c.h.hora, c.h.min, c.h.seg);
    printf("DESCRICAO: ");
    puts(c.descricao);
    putchar('\n');
}
main(){
    COMP c;
    preencher(&c);
    imprimir(c);
}
