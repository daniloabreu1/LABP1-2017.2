#include <stdio.h>
#include <conio.h>
#include <ctype.h>
//questão extra
int maiusculo(char c){
    if(c>=97&&c<=122){
        return ((int)c)-32;
    }

}
void vogal(char c){
    c=toupper(c);
    if(c>=65&&c<=90){
        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("\nVOGAL\n");
        }else{
            printf("\nNAO EH VOGAL\n");
        }
    }else{
        printf("\nOUTRO SIMBOLO");
    }
}
main(){
    char letra;
    printf("DIGITE UMA LETRA ");
    letra=getche();
    vogal(letra);
}
