

// find largest number entered by user
#include <stdio.h>
void main(void){
    int n, p = 0;
    for(;;){
        printf("Enter a number: ");
        scanf("%d", &n);
        if(n > p){
            p = n;

        }
        else{
            if(n <= 0) {
                goto end;
            }
            else {
                continue;
            }
        }
    }
    end : ;
    printf("largest number entered: %d\n", p);
} 
