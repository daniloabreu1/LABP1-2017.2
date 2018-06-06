#include <stdio.h>
#define N 5
typedef struct{
    char nome[50],curso[20];
    float n1, n2, n3;
}ALUNO;
void preencher(ALUNO *a){
    fflush(stdin);
    printf("DIGITE O NOME DO ALUNO ");
    gets(a->nome);
    fflush(stdin);
    printf("DIGITE O CURSO ");
    gets(a->curso);
    printf("DIGITE A NOTA 1: ");
    scanf("%f",&a->n1);
    printf("DIGITE A NOTA 2: ");
    scanf("%f",&a->n2);
    printf("DIGITE A NOTA 3: ");
    scanf("%f",&a->n3);
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
        printf("NOTAS: %.2f , %.2f , %.2f\n",a[i].n1,a[i].n2,a[i].n3);
        putchar('\n');
    }

}
int maiorPrimaNota(ALUNO *a,int n){
    int indice=0, i;
    float m=0;
    for(i=0;i<n;i++){
        if(a[i].n1 > m){
            m=a[i].n1;
            indice=i;
        }
    }
    return indice;
}

int maiorMedia(ALUNO *a,int n){
    int indice=0, i;
    float m=0,med;
    for(i=0;i<n;i++){
        med=(a[i].n1+a[i].n2+a[i].n3)/3;
        if(med > m){
            m=med;
            indice=i;
        }
    }
    return indice;
}
int menorMedia(ALUNO *a,int n){
    int indice=0, i;
    float m=(a[i].n1+a[i].n2+a[i].n3)/3,med;
    for(i=0;i<n;i++){
        med=(a[i].n1+a[i].n2+a[i].n3)/3;
        if(med < m){
            m=med;
            indice=i;
        }
    }
    return indice;
}
void situacao(ALUNO *a, int n){
    int i;
    float med;
    putchar('\n');
    for(i=0;i<n;i++){
        med=(a[i].n1+a[i].n2+a[i].n3)/3;
        if(med >=6 ){
            printf("ALUNO %s APROVADO %.2f\n",a[i].nome,med);
        }else{
            printf("ALUNO %s REPROVADO %.2f\n",a[i].nome,med);
        }
    }
}
main(){
    ALUNO a[N];
    int i,m,med,menor;
    for(i=0;i<N;i++){
        preencher(&a[i]);
    }
    imprimir(a,N);
    m=maiorPrimaNota(a,N);
    med=maiorMedia(a,N);
    menor=menorMedia(a,N);
    printf("\nO ALUNO %s TEM A MAIOR PRIMEIRA NOTA = %.2f\n",a[m].nome,a[m].n1);
    printf("O ALUNO %s TEM A MAIOR MEDIA = %.2f\n",a[med].nome,(a[med].n1+a[med].n2+a[med].n3)/3);
    printf("O ALUNO %s TEM A MENOR MEDIA = %.2f\n",a[menor].nome,(a[menor].n1+a[menor].n2+a[menor].n3)/3);
    situacao(a,N);
}
