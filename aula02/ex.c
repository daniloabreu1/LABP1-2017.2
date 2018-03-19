#include <stdio.h>
main(){
    char c1,c2;
    printf("DIGITE UM CARACTERE ");
    scanf("%c",&c1);
    //No Linux
    __fpurge(stdin);
    //fflush(stdin) No Windows
    printf("DIGITE OUTRO CARACTERE ");
    scanf("%c",&c2);
    printf("\nFORAM DIGITADOS:\n%c\n%c\n",c1,c2);
}
