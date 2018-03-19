#include <stdio.h>
main(){
    float f, c;
    printf("DIGITE A TEMPERATURA EM CELSIUS ");
    scanf("%f",&c);
    f= c*1.8+32;
    printf("TEMPERATURA EM FAHRENHEIT >>> %.2f\n",f);
}
