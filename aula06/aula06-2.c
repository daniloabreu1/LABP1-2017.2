#include <stdio.h>
main(){
    int f,n;
    system("color F1");
    printf("digite um numero ");
    scanf("%d",&n);
    for(f=1;n>0;n--){
        f*=n;//f= f*n;
    }
    printf("%d",f);
}
