#include <stdio.h>
#include <ctype.h>
void main(void){
    char ch1, ch2, ch3;
    printf("Enter your full name: ");
    while((ch1 = getchar()) == ' ');
    while(getchar() != ' ');
    while((ch2 = getchar()) == ' ');
    printf("%c", toupper(ch2));
    while((ch3 = getchar()) != '\x0a' ){
        if(ch3 == ' ') continue;
        printf("%c", ch3);
    }
    printf(", %c.\n", toupper(ch1));

}