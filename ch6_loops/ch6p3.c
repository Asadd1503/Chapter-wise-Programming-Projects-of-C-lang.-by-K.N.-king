#include <stdio.h>
void main(void){
    int space, stop, next;
    printf("Enter the number of days in a month: ");
    scanf("%d", &stop);
    printf("Enter the starting day of a month(sun=1 ... sat=7): ");
    scanf("%d", &space);
    next = space;
    for(;space - 1 > 0;space--){
        printf("  ");
        printf(" ");

    }
    for(int i = 1;i <= stop;next++){
        if(next > 7 ){
            printf("\n");
            next = 0;
            continue;
        }
        else{ printf("%2d", i);
        printf(" ");
        }
        i++;
        
    }
}