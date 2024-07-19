#include <stdio.h>
#include <ctype.h>
void main(void){
    char ch;
    printf("enter a number: ");
    while((ch = getchar()) != '\n'){ 
        if(ch - 65 <= 2 && ch - 65 > -1) printf("2");
        else if(ch - 65 > 2 && ch - 65 <=5) printf("3");
        else if(ch - 65 > 5 && ch - 65 <=8) printf("4");
        else if(ch - 65 > 8 && ch - 65 <=11) printf("5");
        else if(ch - 65 > 11 && ch - 65 <= 14) printf("6");
        else if(ch - 65 > 14 && ch -65 <= 17) printf("7");
        else if(ch - 65 > 17 && ch  - 65 <=20) printf("8");
        else if(ch -65 > 20 && ch - 65 <=23) printf("9");
        else printf("%c", ch);
    }
    printf("\n");
}